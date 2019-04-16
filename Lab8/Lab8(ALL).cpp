//
//  main.cpp
//  Lab8
//
//  Created by Даниил Автушко on 16/04/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

class Student{
    string firstName;
    string lastName;
    int id;
public:
    Student(string a = "Jonh" , string b = "Smith",int d = 0):firstName(a),lastName(b),id(d){}
    void print(){
        cout << firstName << ' ' << lastName << endl;
    }
};
/////Zadanie 2

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
};


//Вариант 3
class Auto{
    string brand;
    int year;
    int maxspeed;
    string model;
public:
    Auto(string b,int y,int ms,string md):brand(b),year(y),maxspeed(ms),model(md){}
    void print(){
        cout << brand << ' ' << year << ' ' << maxspeed << ' ' << model << endl;
    }
};

int main(int argc, const char * argv[]) {
    Student a("Ivan","Ivanov",13567),b("Alex","Ryzhov",13883);
    vector<Student> stdnts;
    stdnts.push_back(a);
    stdnts.push_back(b);
    stdnts[1].print();
    //Zadanie 2
    Complex x(13,4),y(2,7),z(55,6);
    list<Complex> cmplx;
    cmplx.push_back(x);
    cmplx.push_back(y);
    cmplx.push_back(z);
    cout << cmplx.back().getIm() << ' ' << cmplx.back().getRe() << endl;
    cmplx.pop_back();
    cout << cmplx.back().getIm() << ' ' << cmplx.back().getRe() << endl;
    cmplx.pop_back();
    cout << cmplx.back().getIm() << ' ' << cmplx.back().getRe() << endl;
    
    //Zadanie3
    Auto q("Opel",2001,200,"Astro"),w("Nissan",2010,240,"Qashkai");
    queue<Auto> at;
    at.push(q);
    at.push(w);
    at.back().print();
    at.front().print();
    
    
    
    return 0;
}
