#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dog {
private:
    string name;
    int age;
public:

//---- WRITE YOUR OVERLOADED CONSTRUCTOR BELOW THIS LINE
Dog (std::string name_val, int age_val){

    name=name_val;
    age=age_val;

}


//---- WRITE YOUR OVERLOADED CONSTRUCTOR ABOVE THIS LINE
    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof";}
};