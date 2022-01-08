#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Swap{
    int a,b,temp;
    public:
        void input();
        void swap();
        void display();

};

void Swap:: input(){
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
}

void Swap:: swap(){
    temp=a;
    a=b;
    b=temp;
}
void Swap:: display(){
    cout<<"The first number after swapping is : "<<a<<endl;
    cout<<"The first number after swapping is : "<<b<<endl;

}
int main(){
    Swap obj;
    obj.input();
    obj.swap();
    obj.display();

    return 0;
}