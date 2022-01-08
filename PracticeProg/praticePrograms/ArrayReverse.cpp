//C++ Program to reverse an array

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void Reverse(int array[], int size){
    int i, temp;
    
    for(i=0;i<size;size--,i++){

        temp=array[i];
        array[i]=array[size];
        array[size]=temp;

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

    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // To print original array
    printArray(arr, n);
    
    Reverse(arr,n-1); //n-1 because index starts from 0

    // To print the Reversed array
    printArray(arr, n);

    return 0;
}


