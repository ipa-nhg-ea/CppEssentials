/* C++ Program to Find Sum of n Natural Numbers using For loop */

#include<iostream>
#include<stdlib.h>
#include <cstring>
#include <math.h>


using namespace std;

int main(){


    int n, i;
    int sum = 0;
    cout<<"Enter the value of range ";
    cin>>n;

    for(i=1;i<=n;i++){

        sum= sum+i;

    }
    cout<<"The sum of "<<n<<" natural number is : "<<sum<<endl;




    return 0;
}