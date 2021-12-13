#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void pass_by_value0(int num);
void pass_by_value1(string s);
void pass_by_value2(vector<string>v);
void print_vector(vector<string>v);

void pass_by_value0(int num){
    num=1000;
}

void pass_by_value1(string s){
    s ="Changed";
}

void pass_by_value2(vector<string>v){
    v.clear(); 
}
void print_vector(vector<string> v)
{
    for(auto s: v)
        cout<< s <<"";
    cout<< endl;
}

int main(){
    int num {10};
    int num1 {20};
    
    
    cout<< "before calling the function pass by value 0 number is "<< num <<endl;
    pass_by_value0(num);
    cout<< "after calling the function pass by value 0 number is "<< num <<endl;

    vector<string> stooges {"Larry", "Mow", "Elsa"};
    print_vector(stooges);
    pass_by_value2(stooges);
    print_vector(stooges);


}
