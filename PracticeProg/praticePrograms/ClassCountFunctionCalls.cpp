/* Count the number of times a function is called */


#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Count{
    private:
        int n,r;
        float n1,r1;
        static int b;
    public:
        void input();
        void calc();
        void display();

};
int Count::b=0;

void Count::input(){

    cout<<"Enter the integer number : ";
    cin>>n;
    cout<<"Enter the float number : ";
    cin>>n1;
}

void Count::calc(){

    r=n*n;
    r1=n1*n1;
    b++;
}

void Count::display(){

    cout<<"The square of the integer is : "<<r<<endl;
    cout<<"The square of the float is : "<<r1<<endl;
    cout<<"The function is called "<<b<<" times"<<endl;
}
int main(){
    Count c;
    c.input();
    c.calc();
    c.display();

    return 0;
}