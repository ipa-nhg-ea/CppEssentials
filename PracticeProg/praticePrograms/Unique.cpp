/*  C++ Program to Check Number is Unique Number or Not  */

#include<iostream>
#include<stdlib.h>
#include <cstring>
using namespace std;

int main (){

     

   

    long num; //number to input
    

    int a[10]={0}; //integer array to keep count of duplicates initialised to 0

    bool flag=1;
    int i=0;

    cout<<"Enter the number :";
    cin>> num;

    std::string s = std::to_string(num);

    int n = s.length();

    char char_array[n + 1];                       //store the number when converted to character array

    strcpy(char_array, s.c_str()); //convert string to character array

     while(char_array[i]!='\0')   //loop till null character reached
    {
        switch(char_array[i])     //check each element of the character array
        {
            case '0':
                        a[0]++;
                        break;
            case '1':
                        a[1]++;
                        break;
            case '2':
                        a[2]++;
                        break;
            case '3':
                        a[3]++;
                        break;
            case '4':
                        a[4]++;
                        break;
            case '5':
                        a[5]++;
                        break;
            case '6':
                        a[6]++;
                        break;
            case '7':
                        a[7]++;
                        break;
            case '8':
                        a[8]++;
                        break;
            case '9':
                        a[9]++;
                        break;
        }
        i++;
    }

    for(i=0;i<10;i++)
    {
        if(a[i]>1)
        {
            flag=0;
            break;
        }
    }

    if(flag)
        cout<<"\nNumber is Unique.\n";
    else
        cout<<"\nNumber is Not Unique.\n";









    return 0;
}
