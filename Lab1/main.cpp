//
//  main.cpp
//  Lab1
//
//  Created by Даниил Автушко on 12/02/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include "Complex.h"
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream file("/Users/daniilavtusko/Desktop/coding/Lab1OOP/Lab1/Lab1/TestCompl.txt");
    int n,r,m;
    vector<Complex> p;
    file >> n;
    for (int i = 0; i < n;i++){
        file >> r >> m;
        Complex el(r,m);
        p.push_back(el);
    }
    file.close();
    Complex max;
    double md = p[0].module();
    for (int i = 0;i < n;i++)
        if (p[i].module() > md){
            md = p[i].module();
            max = p[i];
        }
    cout << max.printRe() << ' ' << max.printIm() << endl;
    return 0;
}
