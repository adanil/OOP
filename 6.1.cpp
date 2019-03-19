//
//  main.cpp
//  Practica6
//
//  Created by Даниил Автушко on 08/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>

using namespace std;

class Property{
protected:
    int worth;
public:
    Property(int a):worth(a){}
    virtual int tax() = 0;
};

class Apartment:public Property{
public:
   int tax(){
        return worth/1000;
    }
    Apartment(int b = 0):Property(b){
    }
};

class Car:public Property{
public:
    int tax(){
        return worth/200;
    }
    Car(int b = 0):Property(b){
    }
};
class CountryHouse:public Property{
public:
    int tax(){
        return worth/500;
    }
    CountryHouse(int b = 0):Property(b){
    }
};

int main(int argc, const char * argv[]) {
    Property* arr[7];
    arr[0] = new Apartment(1000000);arr[1] = new Apartment(1500000);arr[2] = new Apartment(2000000);
    arr[3] = new Car(300000);arr[4] = new Car(700000);
    arr[5] = new CountryHouse(3000000);arr[6] = new CountryHouse(7000000);
    for (int i = 0;i < 7;i++){
        cout << arr[i]->tax() << endl;
        delete arr[i];
    }
    
    return 0;
}
