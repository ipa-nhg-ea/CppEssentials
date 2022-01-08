/* C++ Program to Find Area of Shapes using Function Overloading */

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class ShapesArea{

    double area;
    public:
        void calcArea(double a);                    //square
        void calcArea(double l, double b );         //rectangle
        void calcArea(double r);                    //circle
        void calcArea(float t,double b,double h);   //triangle
        void calcArea(float h, double r);           //cylinder
        void calcArea(double j);                    //sphere
        void calcArea(float c, long int g);         //cone

};

void ShapesArea:: calcArea(double a){
    cout<<"The area of the square is :" <<a*a<<endl;
}
void ShapesArea:: calcArea(double l, double b){
   
    cout<<"The area of the rectangle is :" <<l*b<<endl;
}
void ShapesArea:: calcArea(double r){  
    cout<<"The area of the circle is :" <<3.14*r*r<<endl;
}
 void calcArea(float t,double b,double h){  
    cout<<"The area of the triangle is :" <<t*b*h<<endl;
}
 void calcArea(float h, double r){  
    cout<<"The volume of the cylinder is :" <<3.14*r*r*h<<endl;
}
void ShapesArea::calcArea(float c, long int g)
{
        cout<<"Volume of the cone is "<<(1/3)*3.14*c*c*g;
}
void ShapesArea::calcArea(double j)
{
        cout<<"Volume of the sphere is "<<(4/3)*3.14*j*j*j;
}

int main(){

        double a,r,d,e,l,b,j,f;
        float t,c,h;
        int ch;
        long int g;
        ShapesArea obj;
        cout<<"\n\n1. area of circle";
        cout<<"\n2. area of rectangle";
        cout<<"\n3. area of triangle";
        cout<<"\n4. area of square";
        cout<<"\n5. Volume of the cone";
        cout<<"\n6. Volume of the sphere";
        cout<<"\n7. Volume of the cylinder";
        cout<<"\n\tEnter your choice ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            /* code */
            cout<<"enter the value of radius of the circle \n";
                        cin>>r;
                        obj.calcArea(r);
                        
            break;
        case 2:
            cout<<"enter the sides of rectangle \n";
                        cin>>l>>b;
                        obj.calcArea(l,b);
            break;
        case 3:
            cout<<"enter the sides of triangle \n";
                        cin>>d>>e;
                        obj.calcArea(0.5,d,e);
                        break;
        case 4:
                        cout<<"enter the sides of square";
                        cin>>a;
                        obj.calcArea(a);
                        break;
        case 5:
                        cout<<"\nEnter the radius of the cone";
                        cin>>c;
                        cout<<"\nEnter the height of the cone";
                        cin>>g;
                        obj.calcArea(c,g);
                        break;
        case 6:
                        cout<<"\nEnter the radius";
                        cin>>b;
                        obj.calcArea(b);
                        break;
        case 7:
                        cout<<"\nEnter the radius";
                        cin>>f;
                        cout<<"\nEnter the height";
                        cin>>h;
                        obj.calcArea(h,f);
                        break;
        default:
                        cout<<"\nThe choice entered is a wrong choice";
        }

    return 0;
}
