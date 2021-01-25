// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>
#include "Account.h"

using namespace std;

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.00);
    
    if (frank_account.deposit(200.0)) 
        cout << "Deposit ok" << endl;
    else
        cout << "Deposit Not Allowed" << endl;
    
    if (frank_account.withdraw(500.0))
        cout << "Withdraw ok" << endl;
    else
        cout << "Not sufficient fund" << endl;
        
    if (frank_account.withdraw(1500.0))
        cout << "Withdraw ok" << endl;
    else
        cout << "Not sufficient fund" << endl;
        
    return 0;
}