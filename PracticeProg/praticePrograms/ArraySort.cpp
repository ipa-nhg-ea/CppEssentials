//C++ Program to sort an array

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int arr[50];
    int i,j,temp,size;

    cout<<"Enter the size of the array max (50) : ";
    cin>>size;

    for(i=0;i<size;i++){
        cout<<"Enter array element arr[" <<i<< "] ::";
            cin>>arr[i];
    }

  cout<<"\nStored Data Before Sorting In Array :: \n\n";

  for(i=0;i<size;i++)
  {
  cout<<" "<<arr[i]<<" ";
  }

   for(i=0;i<size;i++)
 {
     for(j=0;j<size-i-1;j++)
     {
         if(arr[j]>a[j+1])
         {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
         }
     }
 }

 cout<<"\n\nStored Data After Sorting In Array :: \n\n";

 for(i=0;i<size;i++)
  {
  cout<<" "<<arr[i]<<" ";
  }

  cout<<"\n";

    return 0;
}