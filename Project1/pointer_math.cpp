#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"Eram"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout<< boolalpha; //boolean modifier
    cout<< p1 << " == " <<  p2 << " : " << (p1 == p2) << endl;
    cout<< p1 << " == " <<  p3 << " : " << (p1 == p3) << endl;

    cout<< *p1 << " == " <<  *p2 << " : " << (*p1 == *p2) << endl;
    cout<< *p1 << " == " <<  *p3 << " : " << (*p1 == *p3) << endl;

    p3 = &s3; //point to Eram

    cout<< *p1 << " == " <<  *p3 << " : " << (*p1 == *p3) << endl;


    //creating character array
    char name[]{"Frank"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1= &name[0];
    char_ptr2= &name[3];

    cout<<"In the string "<< name << ", " << *char_ptr1 << "is" << (char_ptr2-char_ptr1) << " character apart from " << *char_ptr2 << endl;

    cout<<endl;
    return 0;
}