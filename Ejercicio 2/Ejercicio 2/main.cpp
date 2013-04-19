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
    int s = 0;
    int i = 1;
    
       while (i != 0) {
           std::cout << "Ingresa un número: ";
           std::cin >> i;
           if (i%2==0) {
               s=s+i;
           }
    }
    std::cout << s;

    return 0;
}

