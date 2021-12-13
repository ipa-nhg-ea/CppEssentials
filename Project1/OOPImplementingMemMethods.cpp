#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std; 


class Accounts
{    
    /* attributes */
private: 
    string name;
    double balance;

public:
//implicitly inline methods
    void set_balance(double bal){
        balance=bal;
    }
    double get_balance(){return balance;}


//member methods declared outside the class
    void set_name(string n);
    string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
    
};

void Accounts::set_name(string n) {
    name = n;
}

string Accounts::get_name(){
    return name;
}

bool Accounts::deposit(double amount){
    balance+=amount;
    return true;
}

bool Accounts::withdraw(double amount){
    if (balance>amount)
        {
            /* code */
            balance-=amount;
            cout<< "withdrawing " << amount <<endl;
            cout<<"Remaining account balance: "<< balance <<endl;
            return true;
        }
        else
            cout<<"Insufficient account balance"<<endl;
            return false;
}


int main (){

    Accounts frank_account;
    Accounts jim_account;

    frank_account.set_name("Frank");
    frank_account.get_name();
    frank_account.set_balance(10000.0);
    frank_account.get_balance();
    frank_account.deposit(5000.0);
    frank_account.withdraw(6000);

    

    //Accounts *hacker{nullptr};
    Accounts *hacker =new Accounts;

    //hacker->name="Henry"; //COMPILER ERROR

    delete hacker;






 


    cout<<endl;
    return 0;
}