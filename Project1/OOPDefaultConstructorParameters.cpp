#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std; 



class Player
{
//attributes
private:
    string name;
    int health;
    int xp;
public:

    
//default constructor parameters
    Player(std::string name_val = "None", int health_val = 0, int xp_val=0);


//methods
void set_name(std::string name_val){
    name=name_val;
}


};

Player:: Player(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val}
    {
        cout<<"Three args constructor called"<<endl;
    }


int main(){

    Player slayer;
    slayer.set_name("Salazar Slytherin");

    Player griffindor{"Godric Griffindor"};
    Player villain{"Villain",100};  
    Player hero{"Rowena Ravenclaw", 10, 100};

    cout<<endl;
    return 0;

}