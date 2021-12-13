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

//---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----
string get_name(){
    return name;
}
void set_name(string n){
    name=n;
}
int get_age(){
    return age;
}
void set_age(int number){
    age=number;

}
int get_human_years(){
    return (age*7);
}
string speak(){
    return "Woof";

}
//---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};