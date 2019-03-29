//
//  main.cpp
//  Lab5
//
//  Created by Даниил Автушко on 29/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>

using namespace std;

class Complex{
    int Re_;
    int Im_;
public:
    int getRe(){
        return Re_;
    }
    int getIm(){
        return Im_;
    }
    void setRe(int a){
        Re_ = a;
    }
    void setIm(int a){
        Im_ = a;
    }
    Complex(int a,int b):Re_(a),Im_(b){}
   void operator= (Complex a){
       Re_ = a.Re_;
       Im_ = a.Im_;
    }
    void operator++(){
        Re_++;
        Im_++;
    }
    void operator--(){
        Re_--;
        Im_--;
    }
    bool operator<(Complex a){
        return Re_*Re_ + Im_*Im_ < a.Re_*a.Re_ + a.Im_*a.Im_;
    }
    bool operator>(Complex a){
        return Re_*Re_ + Im_*Im_ > a.Re_*a.Re_ + a.Im_*a.Im_;
    }
    friend istream& operator>>(istream &in,Complex &a);
    friend ostream& operator<<(ostream &out,Complex &a);
};

istream& operator>>(istream &in,Complex &a){
    in >> a.Re_;
    in >> a.Im_;
    return in;
}
ostream& operator<<(ostream &out,Complex &a){
    out << a.Re_ << ' ' << a.Im_ << endl;
    return out;
}

class Vctr{
    int x,y;
public:
    Vctr(int a,int b):x(a),y(b){}
    void operator=(Vctr a){
        x = a.x;
        y = a.y;
    }
    bool operator<(Vctr a){
        return x * x + y * y < a.x * a.x + a.y * a.y;
    }
    bool operator>(Vctr a){
        return x * x + y * y > a.x * a.x + a.y * a.y;
    }
    friend istream& operator>>(istream &in,Vctr &a);
    friend ostream& operator<<(ostream &out,Vctr &a);
};

istream& operator>>(istream &in,Vctr &a){
    in >> a.x;
    in >> a.y;
    return in;
}
ostream& operator<<(ostream &out,Vctr &a){
    out << a.x << ' ' << a.y << endl;
    return out;
}

int main(int argc, const char * argv[]) {
    Complex a(5,6),b(7,8),c(1,1);
    a = b;
    if (b > c)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    cout << b << endl;;
    Vctr k(8,8),d(7,3);
    if (k < d)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    cout << d << endl;
    k = d;
    cout << k << endl;
    return 0;
}
