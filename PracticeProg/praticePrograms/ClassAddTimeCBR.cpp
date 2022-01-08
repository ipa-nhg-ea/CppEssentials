#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Time{

    private:
        int hr,min,sec;

    public:
        void get(){
            cout<<"Enter the hour: ";
                cin>>hr;
                cin>>min;
                cin>>sec;

        }

        void display(){

            cout<<"["<<hr<<":" <<min<<":" <<sec<< ": ] \n";

        }

        void sum(Time &, Time &);
};


void Time::sum(Time &t1,Time &t2)
{
        sec=t1.sec+t2.sec;
        min=sec/60;
        sec=sec%60;
        min=min+t1.min+t2.min;
        hr=min/60;
        min=min%60;
        hr=hr+t1.hr+t2.hr;
}

int main()
{
        Time t1,t2,t3;
          cout<<"\nEnter 1st time Details :: \n";
        t1.get();
        cout<<"\nEnter 2nd time Details :: \n";
        t2.get();
        cout<<"\nThe 1st time entered is :: ";
        t1.display();
        cout<<"\nThe 2nd time entered is :: ";
        t2.display();

        t3.sum(t1,t2);

        cout<<"\nThe Sum of two times are :: ";

        t3.display();
        return 0;
}