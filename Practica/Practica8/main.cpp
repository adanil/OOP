//
//  main.cpp
//  Practica8
//
//  Created by Даниил Автушко on 21/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    //Вариант 1
    fstream file("/Users/daniilavtusko/Desktop/coding/Lab1OOP/Practica8/Practica8/test.txt");
    string s;
    while (!file.eof()) {
        file >> s;
        cout << s << endl;
    }
    
    //Вариант 2 (Для прекращения ввода control + D или ctrl + z)
    fstream fileOut("/Users/daniilavtusko/Desktop/coding/Lab1OOP/Practica8/Practica8/fileOut.txt");
    while (cin >> s){
        fileOut << s << endl;
    }
    return 0;
}
