#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  Player
{
private:
    /* data */
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val)
    {
        name=name_val;
    }

    Player(){
        name="None";
        health=100;
        xp=3;
        
        cout<<"No args constructor called"<<endl;
    }
    Player(std::string name){
        cout<<"string args constructor called"<<endl;
    }
    Player(std::string name_val, int health_val, int xp_val){
        name= name_val;
        health = health_val;
        xp=xp_val;

        cout<<"Three args constructor called"<<endl;
    }
    ~ Player(){
        cout<<"Destructor called for "<< name<<endl;
    }
};

int main(){

    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    delete enemy;
 
    cout<<endl;
    return 0;
}
