/*  C++ Program to Check Number is Unique Number or Not  */

#include<iostream>
#include<stdlib.h>
#include <cstring>
using namespace std;


int main(){

    char string1[50];
    char string2[50];
    char temp[50];
    int i,j,k;

    cout<<"Enter string 1: "<<endl;
    cin>>string1;

    cout<<"Enter string 2: "<<endl;
    cin>>string2;

    for(i=0,j=0;string1[i]!='\0';i++,j++){
        temp[j]=string1[i];

    }

    for(i=0,j=0;string2[i]!='\0'|string1[i]!='\0';i++,j++){
        string1[j]=string2[i];

    }cout<<"String 1 after swapping "<<string1<<endl;

     for(i=0,j=0;temp[i]!='\0'| string2[i]!='\0';i++,j++){
        string2[j]=temp[i];

    }cout<<"String 2 after swapping "<<string2<<endl;







    return 0;
}