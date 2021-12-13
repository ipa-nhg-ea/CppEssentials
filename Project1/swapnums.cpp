#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;



void swap(int &a, int &b); //function prototype

int main(){
    int num {10};
    int num1 {20};
    
    swap(num, num1);
    cout<< num << " " << num1 << endl;
    return 0;
    


}

void swap(int &a, int &b){

    int temp {0};
    temp = a;
    a=b;
    b=temp;
}
