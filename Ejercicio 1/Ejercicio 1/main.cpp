//
//  main.cpp
//  Ejercicio 1
//
//  Created by Jorge Pacora on 19/04/13.
//  Copyright (c) 2013 Jorge Pacora. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    // insert code here...
    int c = 1;
    int n;
    int serie;
    std::cout << "Cantidad de terminos: ";
    std::cin >> n;
    serie = n;
    while (c<=n) {
        std::cout << serie;
        serie = serie + 1;
        c = c + 1;
    }
    std::cout << "\nSe mostraron " << n << " números";
    
    return 0;
}

