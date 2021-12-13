#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){


    
    
    double *p2{nullptr};
    vector<string> *p4{nullptr};
    string *p5 {nullptr};
    
    int *p;
    cout<<"Value of p: "<< p << endl;
    cout<<"Address of p: "<< &p << endl;
    cout<<"sizeof of p: "<< sizeof p << endl;
    p= nullptr;
    cout<<"Value of p: "<< p << endl;

    
    int *p1{nullptr};
    cout<<"Value of p1: "<< p2 << endl;
    cout<<"Address of p1: "<< &p2 << endl;
    cout<<"sizeof of p1: "<< sizeof p2 << endl;

    unsigned long long *p3{nullptr};
    cout<<"Value of p1: "<< p3 << endl;
    cout<<"Address of p1: "<< &p3 << endl;
    cout<<"sizeof of p1: "<< sizeof p3 << endl;

    int score{10};
    cout<<"Value of adress score: "<< &score << endl;
    p = &score;
    cout<<"Value of p: "<< p << endl;


//dereferencing a pointer
    double low_temp {37.5};
    double high_temp{100.6};

    double *temp_pointer {&high_temp};
    cout<< *temp_pointer << endl;

    temp_pointer=&low_temp;
    cout<< *temp_pointer << endl;

    
}