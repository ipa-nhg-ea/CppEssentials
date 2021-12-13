#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

const double pi {3.1415};

double calc_area_circle(double radius){
    double area = pi*radius*radius;
    return area;
}


void area_circle(){

    double radius{};
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    cout<<"The area of a circle with radius "<<radius<<" is "<< calc_area_circle(radius)<<endl;


}

double calc_volume_cylinder(double height, double radius){

    double volume = pi*height*radius*radius;
    return volume;
}

void volume_cylinder(){

    double radius{};
    double height{};
    cout<<"Enter the radius of the cylinder: ";
    cin>>radius;
    cout<<"Enter the height of the cylinder";
    cin>>height;
    cout<<"The volume of the cylinder with radius "<<radius<<" and height "<<height<<" is: "<< calc_volume_cylinder(height, radius)<<endl;


}



int main (){

    
    area_circle();
    volume_cylinder();
     
    
    /* double num{};
    cout<<"Enter a number"<< endl;
    cin>>num;

    cout<<"The square root of "<< num<< " is: "<<sqrt(num)<<endl;
    cout<<"The cubed root of "<< num<< " is: "<<cbrt(num)<<endl;
    cout<<"The sine root of "<< num<< " is: "<<sin(num)<<endl;
    cout<<"The cosine root of "<< num<< " is: "<<cos(num)<<endl;
    cout<<"The ceil root of "<< num<< " is: "<<ceil(num)<<endl;
    cout<<"The floor root of "<< num<< " is: "<<floor(num)<<endl;
 */
return 0;
}