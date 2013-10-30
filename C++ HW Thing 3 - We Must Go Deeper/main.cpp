//
//  main.cpp
//  C++ HW Thing 3 - We Must Go Deeper
//
//  Created by William Holt on 10/30/13.
//  Copyright (c) 2013 William Holt. All rights reserved.
//

#include "simplecalc.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    double a, b;

    simplecalc sc;

    cout << "What's yer first number? ";
    cin >> a;
    cout << "What's yer second number? ";
    cin >> b;

    double addition = sc.add(a,b);
    cout << "\n Adding a and b give ya " << addition;

    double subtract = sc.subtract(a,b);
    cout << "\n Subtracting a and b gives ya " << subtract;

    double multiply = sc.multiply(a,b);
    cout << "\n Multiplying these little guys give you " << multiply;

    double division = sc.divide(a,b);
    cout << "\n Dividing these boogers (a/b) will give you " << division;





    return 0;
}
