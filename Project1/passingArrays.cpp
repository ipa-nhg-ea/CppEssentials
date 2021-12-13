#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[],size_t size){
    for (size_t i {0}; i < size; ++i)
    {
        /* code */
        cout<<arr[i] << " ";
        
    }
    cout<<endl;
    

}

void set_array(int arr[],size_t size, int value){
    for(size_t i{0};i< size;++i)
        arr[i]=value;
}

int main(){
    int score[]{100,90,98,86,82};

    print_array(score,5);
    set_array(score,5,100);
    print_array(score,5);

    cout<<endl;
    return 0;
}