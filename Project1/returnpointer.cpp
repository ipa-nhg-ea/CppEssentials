#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int *create_array(size_t size, int init_value=0){

    int *new_storage(nullptr);  //initialising a pointer as null pointer
    new_storage = new int[size]; //allocating memory dynamically on the heap of size 10 
    for (size_t i{0}; i< size;i++)
        *(new_storage + i) = init_value;
    return new_storage;

}

void display(const int *const array, size_t size){
    for (size_t i{0};i< size;++i)
        cout<< array[i] <<"";
    cout << endl;
}

int main(){
    int *my_array {nullptr};
    size_t size ;
    int init_value {};

    cout<< "How many integers would you like to allocate ?";
    cin>> size;
    cout << "What value would you like to initialise them to ?";
    cin>> init_value;

    my_array =  create_array(size,init_value);

    display(my_array,size);
    delete [] my_array;
    return 0;




}