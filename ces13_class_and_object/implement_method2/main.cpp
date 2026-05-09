#include <iostream>
#include "Account.h"
#include <string>
using namespace std;

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