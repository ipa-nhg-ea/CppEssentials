/* program to display date */

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Date{
    int month, year, day;

    public:
        void input();
        void display();

};

void Date::input(){
    cout<<"Enter the day :";
    cin>>day;

    cout<<"Enter the month :";
    cin>>month;

    cout<<"Enter the year :";
    cin>>year;
}

void Date::display(){

    cout<<"The entered date in dd/mm/yyyy format is : "<<day<<"/"<<month<<"/"<<year<<endl;
}

int main(){
    Date d;
    d.input();
    d.display();

    return 0;
}
