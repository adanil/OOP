//
//  zadanie2.cpp
//  Practica6
//
//  Created by Даниил Автушко on 14/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include "zadanie2.hpp"
#include <iostream>
#include <cmath>

using namespace std;
///Вариант 2
class Expression{
public:
    virtual void print() = 0;
    virtual int calc(int a) = 0;
    virtual void derived() = 0;
    virtual Expression* copy() = 0;
};

class Constant:Expression{
    int value;
public:
    Constant(int a):value(a){}
    void print(){
        cout << value << endl;
    }
    int calc(int a){
        return a;
    }
    void derived(){
        cout << "Constant derived is 0" << endl;
    }
    Expression* copy(){
        Constant a = *this;
        return &a;
    }
};

class Variable:Expression{
    int value;
public:
    Variable(int a):value(a){}
    void print(){
        cout << "x" << endl;
    }
    int calc(int a){
        return a;
    }
    void derived(){
        cout << "Variable derived is 1" << endl;
    }
    Expression* copy(){
        Variable a = *this;
        return &a;
    }
};

class Sum:Expression{
    int value;
public:
    Sum(int a):value(a){}
    void print(){
        cout << "a + b" << endl;
    }
    int calc(int a){
        return value + a;
    }
    void derived(){
        cout << "Sum derived is a' + b'" << endl;
    }
    Expression* copy(){
        Sum a = *this;
        return &a;
    }
};

class Difference:Expression{
    int value;
public:
    Difference(int a):value(a){}
    void print(){
        cout << "a - b" << endl;
    }
    int calc(int a){
        return value - a;
    }
    void derived(){
        cout << "Difference derived is a' - b'" << endl;
    }
    Expression* copy(){
        Difference a = *this;
        return &a;
    }
};

class Multiply:Expression{
    int value;
public:
    Multiply(int a):value(a){}
    void print(){
        cout << "a * b"<< endl;
    }
    int calc(int a){
        return value * a;
    }
    void derived(){
        cout << "Multiply derived is a' * b + a * b'" << endl;
    }
    Expression* copy(){
        Multiply a = *this;
        return &a;
    }
};

class Division:Expression{
    int value;
public:
    Division(int a):value(a){}
    void print(){
        cout << "a/b" << endl;
    }
    int calc(int a){
        return value/a;
    }
    void derived(){
        cout << "Division derived is (a' * b - a * b')/(b*b)" << endl;
    }
    Expression* copy(){
        Division a = *this;
        return &a;
    }
};

class Sinus:Expression{
    int value;
public:
    Sinus(int a):value(a){}
    void print(){
        cout << "sin(x)"<< endl;
    }
    int calc(int a){
        return sin(a);
    }
    void derived(){
        cout << "Sinus derived is cos(a)" << endl;
    }
    Expression* copy(){
        Sinus a = *this;
        return &a;
    }
};

class Cosinus:Expression{
    int value;
public:
    Cosinus(int a):value(a){}
    void print(){
        cout << "cos(x)"<< endl;
    }
    int calc(int a){
        return cos(a);
    }
    void derived(){
        cout << "Cosinus derived is -sin(a)" << endl;
    }
    Expression* copy(){
        Cosinus a = *this;
        return &a;
    }
};

class Exp:Expression{
    int value;
public:
    Exp(int a):value(a){}
    void print(){
        cout << "e^x"<< endl;
    }
    int calc(int a){
        return exp(a);
    }
    void derived(){
        cout << "Exp derived is e^a" << endl;
    }
    Expression* copy(){
        Exp a = *this;
        return &a;
    }
};

class Ln:Expression{
    int value;
public:
    Ln(int a):value(a){}
    void print(){
        cout << "Ln(x)" << endl;
    }
    int calc(int a){
        return log(a);
    }
    void derived(){
        cout << "Ln derived is 1/a" << endl;
    }
    Expression* copy(){
        Ln a = *this;
        return &a;
    }
};

int main(){
    double y, x;
    cout << "Constant" << endl << "Enter value: ";
    cin >> y;
    Constant c(y);
    
    cout << "Enter argument: ";
    cin >> x;
    
    c.print();
    cout << "f(" << x << ") = " << c.calc(x) << endl;
    c.derived();
    
    cout << endl << "Variable" << endl << "Enter argument: ";
    cin >> x;
    Variable v(x);
    v.print();
    cout << "f(" << x << ") = " << v.calc(x) << endl;
    v.derived();
    
    cout << endl << "Sum" << endl << "Enter x and y: ";
    cin >> x >> y;
    Sum s(y);
    s.print();
    cout << "f(" << x << ") = " << s.calc(x) << endl;
    s.derived();
    
    cout << endl << "Difference" << endl << "Enter x and y: ";
    cin >> x >> y;
    Difference d(y);
    d.print();
    cout << "f(" << x << ") = " << d.calc(x) << endl;
    d.derived();
    
    return 0;
}
