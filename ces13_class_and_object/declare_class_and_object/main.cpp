//sec13
//LetsGoClass

#include <iostream>
#include <string>
//#include "Account.h     //pointing (Account) class header file


using namespace std;

class Account {
    string name;
    double balance;     //left money on account
    
public:
    //method
    // inline declare
    void set_balance(double bal){balance = bal;}
    double get_balance() {return balance;}
    
    // declare outside the class
    void set_name(string n);        //understand how to access private variable
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);

};

void Account::set_name(string n){
    name = n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){       //add money
    //if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if (balance - amount >= 0){
        balance -= amount;
    }
    else
        return false;
    
    
}

int main() {
 
    Account frank_account;
    frank_account.set_name("Frank;s account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200.0))
        cout << "DEposit Done" << "\n";
    else
        cout << "DEposit Not Allowed" << "\n";
        
    if (frank_account.withdraw(500.0))
        cout << "Withdraw Done" << "\n";
    else
        cout << "Not enough money" << "\n";
        
    if (frank_account.withdraw(1500.0))
        cout << "Withdraw Done" << "\n";
    else
        cout << "Not enough money" << "\n";
    
    









 
    return 0;
}