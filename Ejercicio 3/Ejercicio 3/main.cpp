//
//  main.cpp
//  Ejercicio 2
//
//  Created by Jorge Pacora on 19/04/13.
//  Copyright (c) 2013 Jorge Pacora. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    // insert code here...
    int col1 = 1;
    int col2 = 10;
    while (col1<=10) {
        std::cout << col1 << col2;
        col1 = col1+1;
        col2=col2-1;
    }
    
    return 0;
}

