#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Rect{
    float length,breadth;

    public:
        Rect(float x, float y){
            length=x;
            breadth=y;
        }
        float getLength(){
            return length;
        }
        float getBreadth(){
            return breadth;
        }
        float calcArea(){
            return length*breadth;
        }

};

int main(){
    Rect obj (2.2,4.5);
    cout<<"The length of the rectangle is : "<<obj.getLength()<<endl;
    cout<<"The breadth of the rectangle is : "<<obj.getBreadth()<<endl;
    cout<<"The area of the rectangle is : "<<obj.calcArea()<<endl;
    return 0;
}