//
//  main.cpp
//  Lab3
//
//  Created by Даниил Автушко on 28/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Child{
    string firstName;
    string lastName;
    int years;
public:
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


class Tiles{
public:
    string brand;
    int size_h,size_w,price;
    void getData(){
        cout << "Brand: " << brand << endl;
        cout << "Size_h: " << size_h << endl;
        cout << "Size_w: " << size_w << endl;
        cout << "Price: " << price << endl;
    }
};

class Complex{
    int Re_,Im_;
public:
Complex(double Re = 0,double Im = 0){
    Re_ = Re;
    Im_ = Im;
}
double  printRe(){
    return Re_;
}
double printIm(){
    return Im_;
}
double getRe(){
    return this->Re_;
}
double getIm(){
    return this->Im_;
}
double module(){
    return sqrt(this->Re_*this->Re_ + this->Im_ * this->Im_);
}
Complex operator+(Complex b){
    Complex res;
    res.Re_ = this->Re_ + b.Re_;
    res.Im_ = this->Im_ + b.Im_;
    return res;
}
Complex operator-(Complex b){
    Complex res;
    res.Re_ = this->Re_ - b.Re_;
    res.Im_ = this->Im_ - b.Im_;
    return res;
}
Complex operator*(Complex b){
    Complex res;
    res.Re_ = this->Re_ * b.Re_ - this->Im_ * b.Im_;
    res.Im_ = this->Re_ * b.Im_ + this->Im_ * b.Re_;
    return res;
}
Complex operator/(Complex b){
    Complex res;
    res.Re_ = (this->Re_ * b.Re_ + this->Im_ * b.Im_)/(b.Re_ * b.Re_ + b.Im_ * b.Im_);
    res.Im_ = (b.Re_ * this->Im_ - this->Re_ * b.Im_)/(b.Re_ * b.Re_ + b.Im_ * b.Im_);
    return res;
}
Complex pow(int p){
    Complex res;
    res = *this;
    while (p > 1) {
        res = res * *this;
        p--;
    }
    return  res;
}
};

class Vctr{
public:
    int x,y;
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
    Child user1,user2;
    user1.enterData();
    user1.printData();
    user2.enterData();
    user2.printData();
    
    //Вариант 2
    
    Tiles potato1,potato2;
    potato1.brand = "Ferm"; potato1.size_h = 15; potato1.size_w = 10; potato1.price = 30;
    potato1.getData();
    potato2.brand = "Organic"; potato2.size_h = 5; potato2.size_w = 6; potato2.price = 70;
    potato2.getData();
    
    //Вариант 3
    Complex cmplx(5,8);
    cout << cmplx.module() << endl;
    
    //Вариант 4
    Vctr a,b;
    a.x = 5; b.x = 3;
    a.y = 7; b.y = 4;
    cout << "Modul a: "  <<a.module() << endl;
    cout << "Sum of a and b: " << a.sum(b).x << ' ' << a.sum(b).y << endl;
    return 0;
}
