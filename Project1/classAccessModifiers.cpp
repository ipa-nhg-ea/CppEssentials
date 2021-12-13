#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std; 




class Account {
//attributes
private:
  string name;
  double balance;



//methods declared inside the class
public:
   void set_balance(double bal){
       balance = bal;
       
   };
   bool get_balance(){
   return balance;
   };
     //methods declared outside the class
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);   

};

//member methods
void Account::set_name(string n){
    name=n;
}

string Account::get_name(){

    return name;
}

bool Account::deposit(double amount){
//verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){

    if(balance-amount>= 0){
        balance-=amount;
        return true;
    }else{
        return false;
    }
}



int main(){   
    Account frank_account;
    frank_account.set_name("Frank Savings Account");
    frank_account.set_balance(10000.0);
    if (frank_account.deposit(200.00))
    {
        /* code */
        cout<<"Deposit OK"<<endl;

    }
    else
        cout<<"Deposit not allowed"<<endl;

        
    frank_account.deposit(1000);
    
      
    
    
    return 0;

}
