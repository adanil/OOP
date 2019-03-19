//
//  main.cpp
//  Practica3
//
//  Created by Даниил Автушко on 02/03/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace  std;

class Book{
    string name,author;
    int pages,yearOfIssue;
public:
    Book(string nam,string aut): name(nam),author(aut){}
    string getName(){
        return name;
    }
    string getAuthor(){
        return author;
    }
    void setName(string n){
        this->name = n;
    }
    void setAuthor(string a){
        this->author = a;
    }
    int getPages(){
        return pages;
    }
    int getYear(){
        return yearOfIssue;
    }
    void setPages(int p){
        this->pages = p;
    }
    void setYear(int y){
        this->yearOfIssue = y;
    }
};
class StudentsGroup{
    string nameOfGroup;
    int countOfMembers,countExams;
public:
    void setName(string n){
        nameOfGroup = n;
    }
    void setMembers(int m){
        countOfMembers = m;
    }
    void setExams(int e){
        countExams = e;
    }
    string getName(){
        return nameOfGroup;
    }
    int getMembers(){
        return countOfMembers;
    }
    int getExams(){
        return countExams;
    }
    
};
class Auto{
    string brand,model;
    int year;
public:
    void setBrand(string n){
        brand = n;
    }
    void setModel(int m){
        model = m;
    }
    void setYear(int e){
        year = e;
    }
    string getBrand(){
        return brand;
    }
    string getModel(){
        return model;
    }
    int getYear(){
        return year;
    }
};
class Vector{
    int module;
    double x1,x2,y1,y2;
public:
    void setStartPoint(double x,double y){
        x1 = x;
        y1 = y;
    }
    void setEndPoint(double x,double y){
        x2 = x;
        y2 = y;
    }
    
    double getModule(){
        return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    }
};
class Librar{
    string city,country,street;
    int countBooks;
    vector<Book> books;
public:
    void setCity(string ct){
        city = ct;
    }
    void setCountry(string c){
        country = c;
    }
    void setStreet(string st){
        street = st;
    }
    void setCountBooks(int cnt){
        countBooks = cnt;
    }
    void addBook(Book a){
        books.push_back(a);
    }
    string getCity(string ct){
        return city;
    }
    string getCountry(string c){
        return country;
    }
    string getStreet(string st){
        return street;
    }
    int getCountBooks(int cnt){
        return countBooks;
    }
};
int main(int argc, const char * argv[]) {
    Book myBook("Wind","Bethoven");
    cout << myBook.getName() << ' ' << myBook.getAuthor() << endl;
    return 0;
}
