//
//  main.cpp
//  Lab6
//
//  Created by Даниил Автушко on 29/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace  std;

class Student{
    string firstName;
    string lastName;
    int id;
public:
    Student(string a = "Jonh" , string b = "Smith"):firstName(a),lastName(b){}
    
};

class Headman:Student{
    string email;
    vector<Student> group;
public:
    Headman(string em,vector<Student> &gr):email(em),group(gr){}
};
//Вариант 2
class Alive{
    string name;
    int years;
public:
    Alive(string nm = "Luccy",int y = 0):name(nm),years(y){}
};

class Bird:Alive{
    int countWings;
public:
    Bird(int wg):countWings(wg){}
};

class Fish:Alive{
    string type;
public:
    Fish(string tp):type(tp){}
};

class Animal:Alive{
    string typeAnimal;
public:
    Animal(string tpAn):typeAnimal(tpAn){}
};
//Вариант 3
class Animal3{
    string name;
    int years;
public:
    Animal3(string nm = "Tom",int ys = 0):name(nm),years(ys){}
};
class Dog:Animal3{
    string breed;
public:
    Dog(string brd):breed(brd){}
};
class Cat:Animal3{
    int childs;
public:
    Cat(int chld):childs(chld){}
};

int main(int argc, const char * argv[]) {
    Student iam("Danil","Avtushko");
    vector<Student> gr;
    gr.push_back(iam);
    Headman someone("exmpl@gmail.com",gr);
    Fish forel("RedFish");
    Dog myDog("Pudel");
    
    return 0;
}
