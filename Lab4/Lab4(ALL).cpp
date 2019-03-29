//
//  main.cpp
//  Lab4
//
//  Created by Даниил Автушко on 29/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Вариант 1
class Child{
    string firstName;
    string lastName;
    int years;
public:
    Child(string a,string b,int c):firstName(a),lastName(b),years(c){}
    ~Child(){
        firstName = "";
        lastName = "";
        years = 0;
        cout << "Object destroyed" << endl;
    }
    void enterData(){
        cout << "Enter firstName: ";
        cin >> firstName;
        cout << "Enter lastName: ";
        cin >> lastName;
        cout << "Enter years: ";
        cin >> years;
    }
    void printData(){
        cout << "firstName: " << firstName << endl;
        cout << "lastName: " << lastName << endl;
        cout << "years: " << years << endl;
    }
};
//Вариант 2
class Tiles{
public:
    string brand;
    int size_h,size_w,price;
    Tiles(string b,int h,int w,int p):brand(b),size_h(h),size_w(w),price(p){}
    ~Tiles(){
        brand = "";
        size_h = size_w = price = 0;
        cout << "Object destroyed" << endl;
    }
    void getData(){
        cout << "Brand: " << brand << endl;
        cout << "Size_h: " << size_h << endl;
        cout << "Size_w: " << size_w << endl;
        cout << "Price: " << price << endl;
    }
};
//Вариант 3
class Complex{
    int Re_,Im_;
public:
    Complex(double Re = 0,double Im = 0){
        Re_ = Re;
        Im_ = Im;
    }
    ~Complex(){
        Re_ = 0;
        Im_ = 0;
    }
    double module(){
        return sqrt(Re_*Re_ + Im_*Im_);
    }
};
//Вариант 4
class Vctr{
public:
    int x,y;
    Vctr(int a = 0,int b = 0):x(a),y(b){}
    ~Vctr(){
        x = y = 0;
    }
    double module(){
        return sqrt(x*x + y*y);
    }
    Vctr sum(Vctr b){
        Vctr res;
        res.x = this->x + b.x;
        res.y = this->y + b.y;
        return res;
    }
    Vctr diff(Vctr b){
        Vctr res;
        res.x = this->x - b.x;
        res.y = this->y - b.y;
        return res;
    }
};
int main(int argc, const char * argv[]) {
    Child son("jonh","smith",18);
    son.printData();
    Tiles exemp("organic",13,2,30);
    exemp.getData();
    Complex cmplx(13,4);
    cout << cmplx.module() << endl;
    Vctr v(13,7);
    cout << v.module() << endl;
    return 0;
}
