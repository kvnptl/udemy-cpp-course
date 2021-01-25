#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
private:
    // attributes    
    std::string name;
    double balance;
    
    
public:
        
    // methods inline
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    
    //methods declare outside class
    void set_name(std::string n);
    std::string get_name();
    
    bool deposit(double bal);
    bool withdraw(double bal);
    
};

#endif // _ACCOUNT_H_
