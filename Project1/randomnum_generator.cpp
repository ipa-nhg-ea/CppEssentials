#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std; 

int main (){

    int random_number{};
    size_t count{10};
    int min {1};
    int max{6};

    cout<<"rand_max on my system is: "<<RAND_MAX<<endl;
    srand(time(nullptr));

    for (size_t i = 1; i < count; i++)
    {
        /* code */
        random_number=rand()%max +min;
        cout<<random_number<<endl;
    }
    cout<<endl;
    return 0;
}