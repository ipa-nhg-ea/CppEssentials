#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Largest{
    private:
        int x,y,z,max;
    public:
        void input();
        void display();
        void calcLargest();


};

void Largest::input(){

    cout<<"\nEnter 1st number :: ";
                cin>>x;
                cout<<"\nEnter 2nd number :: ";
                cin>>y;
                cout<<"\nEnter 3rd number :: ";
                cin>>z;
}

void Largest::display(){

    cout<<"The largest number is : "<<max<<endl;
    
}

void Largest::calcLargest(){
    max = x;
    if(y>x && y>z){
        max=y;
    }
    else if(z>x && z>y){
        max=z;
    }
    else{
        max=x;
    }
}

int main(){
    Largest g;
    g.input();
    g.calcLargest();
    g.display();
}