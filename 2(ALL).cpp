//
//  main.cpp
//  Practica2
//
//  Created by Даниил Автушко on 02/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, const char * argv[]) {
    double a = 4.8, b = -7.9;
    double n,m;
    if (a >= b)
        n = cbrt(a-b);
    else
        n = a * a + (a-b)/sin(a*b);
    if (n < b)
        m = (n+a)/-b + sqrt(sin(a)*sin(a) - cos(n));
    else if (n == b)
        m = b*b + tan(n*a);
    else
        m = b*b*b + n*a*a;
    cout << "a = " << a << " b = " << b << " m = " << m << " n = " << n << endl;
    
    //Вариант 2
    double a2 = -0.6,b2 = 5.3;
    double z,t;
    if (a < b)
        z = sqrt(abs(a2*a2 - b2*b2));
    else
        z = 1 - 2*cos(a2)*sin(b2);
    if (z < b2)
        t = cbrt(z+a2*a2*b2);
    else if (z == b2)
        t = 1 - log10(z) + cos(a2*a2*b2);
    else
        t = 1/cos(z*a2);
    cout << "a = " << a2 << " b = " << b2 << " z = " << z << " t = " << t << endl;
    
    //Вариант 3
    double a3 = 4.6,b3 = 1.5;
    double y3,t3;
    if (a3 <= b3)
        y3 = ((a3 - b3)/(a3 + b3)) * ((a3+b3)/(a3*a3 - a3*b3 + b3*b3));
    else
        y3 = a3 + log(b3*b3);
    if (y3 == b3)
        t3 = (2*y3 + sqrt(y3*y3 - a3))/(2*b3 - sqrt(a3*a3 - y3));
    else if (y3 < b3)
        t3 = sin(y3)*sin(y3) + 1/(tan(a3-b3));
    else
        t3 = cbrt(y3*sin(a3)) + 1/(sqrt(y3*cos(b3)));
    cout << "a = " << a3 << " b = " << b3 << " y = " << y3 << " t = " << t3 << endl;
    
    //Вариант 4
    double a4 = 3.5,x4 = -0.7;
    double y4,t4;
    if (a4 <= x4)
        y4 = a4 + log(x4+a4);
    else
        y4 = sqrt(sin(a4*x4));
    if (a4 > y4)
        t4 = y4/(a4-x4);
    else if (a4 == y4)
        t4 = (y4/(a4-x4)) + ((a4+x4)/(y4*y4));
    else
        t4 = tan(a4*x4) + cos(2*a4*y4);
    cout << "a = " << a4 << " x = " << x4 << " y = " << y4 << " t = " << t4 << endl;
    
    
    return 0;
}
