#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int *int_ptr{nullptr};

    int_ptr = new int;



    cout<< int_ptr << endl;

    delete int_ptr;


    //create a continuos block of memory

    size_t size{0};
    double *temp_ptr{nullptr};

    cout <<"How many temps?";
    cin>> size;

    temp_ptr = new double[size];

    cout<< temp_ptr <<endl;

    delete [] temp_ptr;

    cout<< endl;
    return 0;
}