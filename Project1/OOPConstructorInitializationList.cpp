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
Player :: Player ()
        : name {"None"}, health{0}, xp{0}{
        }

Player :: Player (std::string name_val)
        : name {name_val}, health{0}, xp{0}{
        }

Player :: Player (std::string name_val, int health_val, int xp_val)
        : name {"None"}, health{health_val}, xp{xp_val}{
        }

int main(){

    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain", 100,3};




    cout<<endl;
    return 0;
}








