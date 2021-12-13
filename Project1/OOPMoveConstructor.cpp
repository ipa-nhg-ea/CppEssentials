#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Move{
    private:

        int *data;


    public:
        void set_value(int d){*data=d;}
        int get_value(){return *data;}

        Move(int d);
        Move(const Move &source);
        Move(Move &&source) noexcept;
        ~Move();


       

};
    //code for the copy constructor
    Move:: Move(const Move &source){
        data = new int;
        *data=*source.data;
    }

    //code for the copy constructor
    Move:: Move( Move &&source):data{source.data}
        {
            source.data=nullptr;
            cout<<"Move constructor - moving resource: "<< *data<<endl;
        }

        Move::~Move(){
            if(data!=nullptr){
                cout<<"Destructor called for data :"<<*data<<endl;
            }else{cout<<"Destructor called for nullptr"<<endl;}
        delete data;}
     
  int main(){

      vector<Move> vec;

      vec.push_back(Move{10});
      vec.push_back(Move{20});

      return 0;
  }     

