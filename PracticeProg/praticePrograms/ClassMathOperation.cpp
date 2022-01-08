/*Write a C++ program for various Mathematical Operations using Switch case*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class MathOperation{
    
    public:
        void add(float a, float b);
        void mult(float a, float b);
        void div(float a, float b);
        void square(float x);
        void power(float base, float expo);
        void sqroot(float x);
};

void MathOperation::add(float a, float b){
    cout<<"The sum of the two input values are: "<<a+b<<endl;
}
void MathOperation::mult(float a, float b){
    cout<<"The product of the two input values are: "<<a*b<<endl;
}
void MathOperation::div(float a, float b){
    cout<<"The quotient of the two input values are: "<<a/b<<endl;
}
void MathOperation::square(float x){
    cout<<"The sqaure of the input valuesare: "<<x*x<<endl;
}
void MathOperation::power(float base, float expo){  
    cout<<"The power is: "<<std::pow(base,expo)<<endl;
}
void MathOperation::sqroot(float x){
    cout<<"The sum of the two input values are: "<<sqrt(x)<<endl;
}

int main(){

    float a, b;
    int ch;
    MathOperation obj;

    cout<<"Perform Math Operation : "<<endl;
    cout<<"Press 1 for addition of two numbers"<<endl;
    cout<<"Press 2 for multiplication of two numbers"<<endl;
    cout<<"Press 3 for division of two numbers"<<endl;
    cout<<"Press 4 for squaring of two numbers"<<endl;
    cout<<"Press 5 to find exponent"<<endl;

    cout<<"Enter your choice";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter the numbers to be added : ";
        cin>> a>>b;
        obj.add(a,b);
        break;
    case 2:
        cout<<"Enter the numbers to be multiplied : ";
        cin>> a>>b;
        obj.mult(a,b);
        break;
    case 3:
        cout<<"Enter the numbers to be divided : ";
        cin>> a>>b;
         obj.div(a,b);
        break;
     case 4:
        cout<<"Enter the numbers to be squared : ";
        cin>> a;
         obj.square(a);
        break;
    case 5:
        cout<<"Enter the values of base and exponent : ";
        cin>> a>>b;
         obj.power(a,b);
        break;
     case 6:
        cout<<"Enter the number whose square root needs to be found : ";
        cin>> a;
         obj.sqroot(a);
        break;
    
    default:
        cout<<"Wrong choice. Try again !";
        break;
    }
    

    return 0;
}
