//
//  main.cpp
//  Practica7
//
//  Created by Даниил Автушко on 21/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
//Вариант 1
class Animal{
protected:
    string name;
    int paws;
    int years;
public:
    virtual void abstract() = 0;
};

class Cat:Animal{
public:
    virtual void abstract();
};

class Dog:Animal{
public:
    virtual void abstract();
};

class Parrot:Animal{
public:
    virtual void abstract();
};
//Вариант 2

class Figure{
protected:
    double square;
    int cntAngle;
public:
    virtual double calcSquare() = 0;
};

class Tetragon:Figure{
public:
    virtual double calcSquare();
};

class Rhombus:Tetragon{
public:
    virtual double calcSquare();
};
class Rectangle:Tetragon{
public:
    virtual double calcSquare();
};

//Вариант 3
class Vehicle{
protected:
    string carNumber;
    string model;
public:
    virtual double calcFuel() = 0;
};

class Car:Vehicle{
public:
    virtual double calcFuel() = 0;
};

class Bus:Vehicle{
public:
    virtual double calcFuel() = 0;
};

class Bicycle:Vehicle{
public:
    virtual double calcFuel() = 0;
};

//Вариант 4

class Computer{
protected:
    string model;
    string processor;
public:
    virtual void printModel() = 0;
};

class Keyboard{
protected:
    string language;
    string brand;
public:
    virtual void printBrand() = 0;
};

class Notebook:Computer,Keyboard{
public:
    virtual void printModel();
    virtual void printBrand();
};

class Phone:Computer,Keyboard{
public:
    virtual void printModel();
    virtual void printBrand();
};

class Desktop:Computer,Keyboard{
public:
    Desktop(string modl,string proc,string lang,string br){
        this->model = modl;
        this->processor = proc;
        this->language = lang;
        this->brand = br;
    }
    virtual void printModel(){
        cout << model << endl;
    }
    virtual void printBrand(){
        cout << brand << endl;
    }
};

int main(int argc, const char * argv[]) {
    Desktop myComp("mac","intel","rus","apple");
    myComp.printBrand();
    myComp.printModel();
    return 0;
}
