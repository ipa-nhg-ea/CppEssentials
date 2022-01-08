//C++ Program to find duplicates in an array

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
/* function to find duplicates in an array */

void duplicate(int arr[], int size){
    int i ,j;
    cout<<"\n\nDuplicate Values in Given Array are :: \n\n";
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
             if(arr[i]==arr[j])
             {
                cout<<" "<<arr[i];
             }
        }
       
    }


}




/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main(){
     int i,n,a[50];
    //n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Enter the size of the array (max size 50)";
    cin>>n;

    for(i=0;i<n;i++){
        cout<<"Enter the arr["<< i <<"] element";
        cin>>a[i];
    }

    printArray(a,n);

    duplicate(a, n);

    cout<<"\n";
    return 0;
}