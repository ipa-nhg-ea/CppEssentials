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

    std::string get_name(){ return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
//copy constructor
    Player(const Player &source);
    //destructor 
    ~Player(){cout <<"Destructor called for: "<< name << endl;}

};

Player::Player(std::string name_val, int health_val, int xp_val)
: name{name_val}, health{health_val}, xp{xp_val}{
    cout<<"Three args constructor called"<<endl;

}

 Player::Player(const Player &source)
    :name{source.name},health{source.health}, xp{source.xp}{
        cout<<"Copy constructor - made copy of:"<< source.name <<endl;
}

void display_player (Player p)
{
    cout<<"Name"<<p.get_name()<<endl;
    cout<<"Health"<<p.get_health()<<endl;
     cout<<"XP"<<p.get_xp()<<endl;


}




int main ()
{
    Player empty;
    display_player(empty);

    Player sexy{"XXXXXXX", 100,50};
    Player hottie{sexy}; //initialising it as an existing object



    Player frank{"Frank"};
    Player hero{"Hero", 100,0};
    Player villain{"Villain", 100,100};
  


    return 0;

}