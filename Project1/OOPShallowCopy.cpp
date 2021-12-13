#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ShallowCopy{

    private:
        int *data;

    public:
        void set_value(int d){*data=d;}
        int get_value(){return *data;}
     



        ShallowCopy(int d); //constructor
        ShallowCopy(const ShallowCopy &source); //shallow copy of the constructor

    //destructor
        ~ShallowCopy(); //destructor because we are allocating memory dynamically

   
};

 ShallowCopy::ShallowCopy(int d){
        data = new int;
        *data =d;
    }

    //copies the pointer not the data its pointing to
ShallowCopy::ShallowCopy(const ShallowCopy &source): data(source.data){
        cout<<"copy constructor"<<endl;

    }
ShallowCopy::~ShallowCopy(){
        delete data;
        cout<<"Destructor freeing space";

    }
void display(ShallowCopy s){

        cout<< s.get_value()<<endl;
    }
int main(){

    ShallowCopy copydata1 {100};
    display(copydata1);

    ShallowCopy obj2 (copydata1);
    obj2.set_value(1000); //wont work
   
    
    return 0;
    cout<<endl;
}