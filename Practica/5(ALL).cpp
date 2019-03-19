//
//  main.cpp
//  Practica5
//
//  Created by Даниил Автушко on 06/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>

using namespace std;

void BubbleSort(int* arr,int sizeArr){
    for (int i = 0;i < sizeArr-1;i++)
        for (int j = i+1;j < sizeArr;j++)
            if (arr[i] > arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
}
void BubbleSort(double* arr,int sizeArr){
    for (int i = 0;i < sizeArr-1;i++)
        for (int j = i+1;j < sizeArr;j++)
            if (arr[i] > arr[j]){
                double t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
}

void SelectionSort(int* arr,int sizeArr){
    for (int i = 0;i < sizeArr-1;i++){
        int minEl = arr[i];
        int minIn = i;
        for (int j = i;j < sizeArr;j++)
            if (arr[j] < minEl){
                minEl = arr[j];
                minIn = j;
            }
        arr[minIn] = arr[i];
        arr[i] = minEl;
    }
}

void SelectionSort(double* arr,int sizeArr){
    for (int i = 0;i < sizeArr-1;i++){
        double minEl = arr[i];
        int minIn = i;
        for (int j = i;j < sizeArr;j++)
            if (arr[j] < minEl){
                minEl = arr[j];
                minIn = j;
            }
        arr[minIn] = arr[i];
        arr[i] = minEl;
    }
}

void InsertionSort(int* arr,int sizeArr){
    for (int i = 1;i < sizeArr;i++){
        int j = i;
        while (arr[j] < arr[j-1] && j > 0) {
            int t = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = t;
            j--;
        }
    }
}

int sum(int a,int b){
    return a+b;
}
double sum(double a,double b){
    return a+b;
}
float sum(float a,float b){
    return a+b;
}
long long sum(long long a,long long b){
    return a+b;
}
int diff(int a,int b){
    return a-b;
}
double diff(double a,double b){
    return a-b;
}
float diff(float a,float b){
    return a-b;
}
long long diff(long long a,long long b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
double mul(double a,double b){
    return a*b;
}
float mul(float a,float b){
    return a*b;
}
long long mul(long long a,long long b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}
double divide(double a,double b){
    return a/b;
}
float divide(float a,float b){
    return a/b;
}
long long divide(long long a,long long b){
    return a/b;
}
void InsertionSort(double* arr,int sizeArr){
    for (int i = 1;i < sizeArr;i++){
        int j = i;
        while (arr[j] < arr[j-1] && j > 0) {
            double t = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = t;
            j--;
        }
    }
}

int main(int argc, const char * argv[]) {
    int arr[10] = {5,7,23,43,1,23,7,8,19,31};
    for (int i = 0;i < 10;i++)
        cout << arr[i] << ' ';
    cout << endl;
    //BubbleSort(arr, 10);
    //SelectionSort(arr, 10);
    InsertionSort(arr, 10);
    for (int i = 0;i < 10;i++)
        cout << arr[i] << ' ';
    cout << endl;
    double darr[10] = {1.3,1.5,13.2,18.9,2.7,6.0,15.3,3.4,8.3,10.1};
    for (int i = 0;i < 10;i++)
        cout << darr[i] << ' ';
    cout << endl;
    //BubbleSort(darr, 10);
    //SelectionSort(darr, 10);
    InsertionSort(darr, 10);
    for (int i = 0;i < 10;i++)
        cout << darr[i] << ' ';
    cout << endl;
    //Вариант 4
    cout << "Задание 4" << endl;
    //int a = 5;
    //int b = 3;
    double a = 7.7;
    double b = 13.8;
    cout << sum(a,b) << ' ' << diff(a,b) << ' ' << mul(a,b) << ' ' << divide(a,b) << endl;
 
    
    return 0;
}
