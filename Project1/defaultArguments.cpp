#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

double calc_cost(double base_cost, double tax = 0.06, double shipping = 3.25);

double calc_cost(double base_cost, double tax, double shipping){
    return base_cost+=(base_cost*tax) + shipping;
}

int main(){

    double cost{0};

    cost =calc_cost(100, 0.04, 4.25);
    
    cost =calc_cost(600, 0.05);

    cost =calc_cost(500);


}