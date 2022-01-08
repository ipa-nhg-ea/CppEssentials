#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Reverse{
    private:
        int n,n1,d,rem;
    public:
        void input();
        void calculateReverse();
        void display();
};

void Reverse::input(){
    cout<<"Enter the number that needs to be reversed : ";
    cin>>n;
}

void Reverse::calculateReverse(){
    n1=n;
    while(n>0){
        d=n%10;
        rem=(rem*10)+d;
        n=n/10;
    }
}

void Reverse:: display(){

    cout<<"The reverse of"<<n1<< " number is :"<<rem<<endl;

}

int main(){

    Reverse rev;
    rev.input();
    rev.calculateReverse();
    rev.display();

    return 0;
}