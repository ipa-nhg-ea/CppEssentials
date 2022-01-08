#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int randomGenerator(){

    int i;
    int num;
    
    for(i=0;i<=10;i++){
        num = rand() % 100;
        std::cout<<"The number is :"<<num<<endl;
    }
        


}

int main(){

    randomGenerator();

    return 0;
}