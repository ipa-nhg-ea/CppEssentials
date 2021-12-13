#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std; 


class Accounts
{    
    /* attributes */
public: 
    string name;
    double balance;


    bool deposit_balance(double amount){balance+=amount;
        cout<<"deposit function called"<<endl;
        cout<<balance<<endl;
    };

    bool withdraw_amount(double amount){balance-=amount;
        cout<<"withdraw function called"<<endl;
        cout<<balance<<endl;
    };
    
}; 


int main (){

    Accounts frank_account;
    Accounts jim_account;

    frank_account.name = "Frank";
    frank_account.balance = 10000;

    frank_account.deposit_balance(5000.0);
    frank_account.withdraw_amount(600);

    

    //Accounts *hacker{nullptr};
    Accounts *hacker =new Accounts;

    hacker->name="Henry";

    delete hacker;






 


    cout<<endl;
    return 0;
}