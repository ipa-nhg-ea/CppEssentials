/*  C++ Program to reverse a String  */

#include<iostream>
#include<string.h>
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>


using namespace std;

int main(){

    int count=0;
    int i,j;
    int length=0;
    char c[50];
    char ch[50];
    

    cout<<"Enter the string :";
    cin>>c;

    for(i=0;c[i]!='\0';i++){
        length++;
        
    }cout<<length<<endl;

    for(j=(length-1);j>=0;j--){
        
        cout<<c[j];
        
       
    }
    

    return 0;

}