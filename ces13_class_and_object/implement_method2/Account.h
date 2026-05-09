#ifndef _ACCOUNT_H_     //or pragma once
#define _ACCOUNT_H_
#include <string>

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

#endif //_ACCOUNT_H_