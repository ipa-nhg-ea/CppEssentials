#include<iostream>
#include<stdlib.h>
#include <cstring>
#include <math.h>
using namespace std;

int main(){

    int num;
    double square;

    cout<<"Enter a number: ";
    cin>>num;

    square= sqrt(num);

    cout<<"The square root of the number is : "<< square <<endl;

    return 0;
}