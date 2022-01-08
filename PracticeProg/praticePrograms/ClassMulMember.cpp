#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Array{
    private:
        int arr[100];
        int size;
    public:
        void input();
        void mult();
        
};

void Array::input(){
    int i;
    cout<<"Enter the size of the array: ";
    cin>>size;

    for(i=0;i<size;i++){
        cout<<"Enter the  arr["<<i<<"] element";
        cin>>arr[i]; 
    }
}

void Array::mult(){
    int k;
    cout<<"Enter the number you wish to multiply the element with :";
    cin>>k;
    int i, temp[100];
    for(i=0;i<size;i++){
        temp[i]=arr[i]*k;
    }
     for(i=0;i<size;i++){
        cout<<"The new array is :"<<temp[i]<<endl;
    
}}

int main()
{
        Array mul;

        mul.input();
        mul.mult();

        return 0;
}