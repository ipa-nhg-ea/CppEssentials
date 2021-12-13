#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int num{300}; //global variable / declared outside a class..value initialised just once

void global_example(){
    cout<<"global number is: "<< num <<" at the start of the global example"<<endl;
    num*=2;
    cout<<"global number is: "<< num <<" at the end of the global example"<<endl;

}

void local_example(int x){

    int num{1000};
    cout<< "local num at the start of local_example: "<<num<<endl;
    num=x;
    cout<<"Local number at the end of local example: "<<num<<endl;


}


void static_local_number(){

    static int num{5000}; // retains its value between the calls, not reiniliazed each time the function gets called
    cout<< "local static num is: "<<" in static_local_example - start"<<endl;
    num+=1000;
    cout<<"local static num is: "<< num<<"in static_local_example - end" << endl;
}


int main(){

    int num {100};
    int num1{50};
    cout<< "local num within the main block" << num << endl;

{
    int num {200};
    cout<< "Local num is: "<< num<< " in the inner block in main" <<endl;
    cout<<"inner block in main can see out - num1 is: "<< num1<<endl;

}
    cout << "Local num is: "<< num<<" in main" <<endl;

    local_example(10);
    global_example();
}