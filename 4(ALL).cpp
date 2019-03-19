//
//  main.cpp
//  Practica4
//
//  Created by Даниил Автушко on 06/03/2019.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

double* Create(int n){
    double* m = new double[n];
    return m;
}

void Init(double* m,int n){
    for (int i = 0;i < n;i++)
        m[i] = i;
}

void Print(double* m,int n){
    for (int i = 0;i < n;i++)
        cout << m[i] << ' ';
    cout << endl;
}

void MemFree(double*m){
    delete[] m;
}

void InitRandom(int** a,int k,int l){
    for (int i = 0;i < k;i++)
        for (int j = 0;j < l;j++)
            a[i][j] = (rand()%40) + 10;
}

void PrintIntArray(int** a,int k,int l){
    for (int i = 0;i < k;i++){
        for (int j = 0;j < l;j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

int main(int argc, const char * argv[]) {
    int n = 0;
    while (n != -1){
        cout << "Для выхода из программы введите -1" << endl;
        cout << "Введите размер массива: ";
        cin >> n;
        if (n == -1)
            break;
        double* m = Create(n);
        Init(m, n);
        Print(m, n);
        MemFree(m);
    }
    //Вариант 2
    int* arr = new int[12];
    for (int i = 0;i < 12;i++){
        arr[i] = i;
        cout << arr[i] << ' ';
    }
    cout << endl;
    for (int i = 0;i < 11;i += 2){
        int t = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = t;
    }
    for (int i = 0;i < 12;i++)
        cout << arr[i] << ' ';
    cout << endl;
    
    //Вариант 3
    int k,l;
    cout << "Введите количество строк в массиве: ";
    cin >> k;
    cout << "Введите количество столбов в массиве: ";
    cin >> l;
    int** a = new int*[k];
    for (int i = 0; i < k;i++)
        a[i] = new int[l];
    InitRandom(a, k, l);
    PrintIntArray(a, k, l);

    return 0;
}
