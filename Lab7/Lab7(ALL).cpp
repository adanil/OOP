//
//  main.cpp
//  Lab7
//
//  Created by Даниил Автушко on 16/04/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Human{
    string surname,name,midname;
    int age;
public:
    Human(){
        surname = "Avtushko";
        name = "Danil";
        age = 18;
    }
    Human(string n,string sn,string mn, int ag):name(n),surname(sn),midname(mn),age(ag){}
    ~Human(){
        midname = "";
        surname = "";
        name = "";
        age = 0;
    }
    virtual void print() = 0;
    
};

class Student:Human{
    bool on_lesson;
public:
    Student():Human(),on_lesson(false){}
    Student(string n,string sn,string mn, int ag,bool ol):Human(n,sn,mn,ag),on_lesson(ol){}
    void print(){
        if (on_lesson)
            cout <<"On lesson? True" << endl;
        else
            cout <<"On lesson? False" << endl;
    }
    ~Student(){
        on_lesson = false;
    }
    
};

class Boss:Human{
    int number_of_workers;
public:
    Boss():Human(),number_of_workers(0){}
    Boss(string n,string sn,string mn, int ag,int now):Human(n,sn,mn,ag),number_of_workers(now){}
    void print(){
        cout <<"Number of workers: "<< number_of_workers << endl;
    }
    ~Boss(){
        number_of_workers = 0;
    }
};

int main(int argc, const char * argv[]) {
    Student s("Jmishenko", "Dmitriy","Alekseevich", 54, true);
    s.print();
    Boss b("Pushkin","Alexander","Sergeevich",33,15);
    b.print();
    return 0;
}
