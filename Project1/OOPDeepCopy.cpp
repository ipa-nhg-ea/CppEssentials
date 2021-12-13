#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std; 

class Deep{

    private:
        int *data;

    public:

        void set_value(int d){*data=d;}
        int get_value(){return *data;}

        Deep(int d);
        Deep(const Deep &source);
        ~Deep();


};

 Deep::Deep(int d){
            data=new int;
            *data=d;
        }

        Deep::Deep(const Deep &source){
            data= new int;             //only difference here is we allocate new storage for the copy object as well
            *data=*source.data;
            cout<<"Deep copy constructor called"<<endl;
        }

        Deep::~Deep(){
            delete data;
            cout<<"Freeing space - destructor called"<<endl;
        }
void display(Deep s){

        cout<< s.get_value()<<endl;

}

int main(){

    Deep copydata1 {100};
    display(copydata1);

    Deep obj2 (copydata1);
    obj2.set_value(1000); // works
   
    
    return 0;
    cout<<endl;
}

