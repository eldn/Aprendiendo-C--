/* ------------ php2c++ pass 1: Declarations ----------------*/
#include "libphp.h"

#line 5 "candidateo.php"
porcentaje(_s_total, _s_parte, _s_redondear = 1) ;

#line 5 "candidateo.php"
/* ------------ php2c++ pass 2: Class Declarations ----------*/
/* ------------ php2c++ pass 3: Code outside functions ------*/
int main(int argc,char **argv)
{
    
#line 1 "candidateo.php"
    
    _s_candidata = array();
    _s_i = 1;
    _s_parar = 0;
    
#line 8 "candidateo.php"
    ;
    ///////////////////////
    _s_candidatas = 4;
    ///////////////////////
    _s_candidata["1"]["ciudadA"] = "200";
    _s_candidata["1"]["ciudadB"] = "350";
    _s_candidata["1"]["ciudadC"] = "400";
    
    _s_candidata["1"]["TOTAL"] = _s_candidata["1"]["ciudadA"] + _s_candidata["1"]["ciudadB"] + _s_candidata["1"]["ciudadC"];
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    _s_candidata["2"]["ciudadA"] = "1234";
    _s_candidata["2"]["ciudadB"] = "2450";
    _s_candidata["2"]["ciudadC"] = "990";
    
    _s_candidata["2"]["TOTAL"] = _s_candidata["2"]["ciudadA"] + _s_candidata["2"]["ciudadB"] + _s_candidata["2"]["ciudadC"];
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    _s_candidata["3"]["ciudadA"] = "2040";
    _s_candidata["3"]["ciudadB"] = "3050";
    _s_candidata["3"]["ciudadC"] = "1000";
    
    _s_candidata["3"]["TOTAL"] = _s_candidata["3"]["ciudadA"] + _s_candidata["3"]["ciudadB"] + _s_candidata["3"]["ciudadC"];
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    _s_candidata["4"]["ciudadA"] = "750";
    _s_candidata["4"]["ciudadB"] = "890";
    _s_candidata["4"]["ciudadC"] = "1500";
    
    _s_candidata["4"]["TOTAL"] = _s_candidata["4"]["ciudadA"] + _s_candidata["4"]["ciudadB"] + _s_candidata["4"]["ciudadC"];
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    _s_totalVotos = _s_candidata["1"]["TOTAL"] + _s_candidata["2"]["TOTAL"] + _s_candidata["3"]["TOTAL"] + _s_candidata["4"]["TOTAL"];
    
    _s_candidata["1"]["PORCENTAJE"] = porcentaje(_s_totalVotos, _s_candidata["1"]["TOTAL"]);
    _s_candidata["2"]["PORCENTAJE"] = porcentaje(_s_totalVotos, _s_candidata["2"]["TOTAL"]);
    _s_candidata["3"]["PORCENTAJE"] = porcentaje(_s_totalVotos, _s_candidata["3"]["TOTAL"]);
    _s_candidata["4"]["PORCENTAJE"] = porcentaje(_s_totalVotos, _s_candidata["4"]["TOTAL"]);
    
    echo( "Candidata 1: " + _s_candidata["1"]["PORCENTAJE"] + " %<br>");
    echo( "Candidata 2: " + _s_candidata["2"]["PORCENTAJE"] + " %<br>");
    echo( "Candidata 3: " + _s_candidata["3"]["PORCENTAJE"] + " %<br>");
    echo( "Candidata 4: " + _s_candidata["4"]["PORCENTAJE"] + " %<br>");
    echo( "<br>");
    while(!!(_s_i <= _s_candidatas)){
        if(!!(_s_candidata[_s_i]["PORCENTAJE"] >= "50.1")) { echo( "Candidata "+_s_i+" gan&oacute; el concurso<br>"); die(); } else { echo( "Candidata "+_s_i+" no gan&oacute;<br>"); };
        _s_i++;
    }
#line 55 "candidateo.php"
    ;
    
    ////segunda vuelta
    if(!!(_s_parar != "1")) {
        
        
    }
#line 61 "candidateo.php"
    ;
    
    
    
    
    
} /* main */
/* ------------ php2c++ pass 4: Function bodies -------------*/

#line 5 "candidateo.php"
porcentaje(_s_total, _s_parte, _s_redondear /*= 1*/) {
    return round(_s_parte / _s_total * 100, _s_redondear);
    //return $parte / $total * 100;
}
#line 8 "candidateo.php"

