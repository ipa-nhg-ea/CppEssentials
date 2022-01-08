/* C++ program to Find Length of String without using strlen*/

#include<iostream>
#include<string.h>
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>


using namespace std;

int main(){

    std::string s;
    char ch[50];
    int count=0,i;

    cout<<"Enter the string ";
    cin>>ch;
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    cout<<"length of the string is "<<count<<endl;



    return 0;
}