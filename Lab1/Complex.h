//
//  Func.h
//  Lab1
//
//  Created by Даниил Автушко on 12/02/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

class Complex{
    double Re_,Im_;
public:
    Complex(double Re = 0,double Im = 0);
    double printRe();
    double printIm();
    double getRe();
    double getIm();
    double module();
    Complex operator+(Complex b);
    Complex operator-(Complex b);
    Complex operator*(Complex b);
    Complex operator/(Complex b);
    Complex pow(int p);
};


