/*  C++ Program to Count Occurrences of Character in a String  */

#include<iostream>
#include<string.h>
#include <cstring>
#include <vector>
#include <cmath>


using namespace std;

int main(){

    int count=0;
    int i;
    char c[50];
    char ch;
    

    cout<<"Enter the string :";
    cin>>c;

    cout<<"\nEnter any Character to count occurrences :: ";
    cin>>ch;

    for(i=0;c[i]!='\0';i++){
        if(c[i]==ch){
            count++;
        }}

    if(count==0)
        cout<<"No occurence of the entered character"<<endl;
    else
        cout<<"Character occurs "<<count<<" times"<<endl;
    

    return 0;
}
