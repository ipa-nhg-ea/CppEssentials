#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    private:
    std::string name;
    int health;
    int xp;

    public:
    //overloaded constructors
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);

};


Player :: Player (std::string name_val, int health_val, int xp_val)
        : name {name_val}, health{health_val}, xp{xp_val}{
            cout<<"three args constructor called"<<endl;
        }

Player :: Player ()
        : Player{"None",0,0}{
            cout<<"No arg constructor called"<<endl;
        }

Player :: Player (std::string name_val)
        : Player{name_val,0,0}{
            cout<<"one arg constructor called"<<endl;
        }

int main(){

    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain", 100,3};




    cout<<endl;
    return 0;
}