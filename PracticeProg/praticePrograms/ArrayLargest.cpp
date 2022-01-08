//C++ Program to find largest element in an array
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int arr[20];
    int i,j,size,largest=arr[0];

    cout<<"Enter the size of the array max (20)";
    cin>>size;

    for(i=0;i<size;i++)
    {
        cout<<"Enter the arr["<<i<<"] element";
        cin>>arr[i];
    }

    for(i=0;i<size;i++){
       if(arr[i]>largest){
           largest=arr[i];
       }
    }

    cout<<"\n\nLargest Element in an Array :: "<<largest<<endl;


    return 0;
}