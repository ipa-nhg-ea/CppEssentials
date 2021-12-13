#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int num{100};
    int &ref{num};
    int *p{&num};

    cout<<num<<endl;
    cout<<ref<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
   
    
    num =200;
    cout<<"\n----------------------------"<<endl;
    cout<< num <<endl;
    cout<<ref<<endl;

    ref = 300;
    cout<<"\n----------------------------"<<endl;
    cout<<num<<endl;
    cout<<ref<<endl;

    vector<string> stooges {"Larrz", "Moe", "Funnz"};



    //auto range for loop. making copies of the vector
    for (auto str:stooges) //range based for loop the compiler figures out what the type of str is 
        str="Sexy";

    for (auto str: stooges)
        cout<<str<<endl;

    cout<<"\n----------------------------"<<endl;
    //making change to the actual vector
    for (auto &str: stooges){
        str="Sexy";
        cout<<str<<endl;}

    cout<<"\n----------------------------"<<endl;

    //if we wish to protect our changes from getting changed while using references
    for (const auto &str: stooges){
         cout<<str<<endl;}


        
    
        
               


    
    
    cout<<endl;
    return 0;
}