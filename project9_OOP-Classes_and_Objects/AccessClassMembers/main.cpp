// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    // attributes
    string name {"Player"};
    int health {0};
    int xp {3};
    
    // methods
    void talk(string talk_to_say) { cout << name << " says " << talk_to_say << endl; }
    bool is_dead();
};

class Account {
public:
    // attributes
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit(double bal) { balance +=bal; cout << "In deposit" << endl; return true;}
    bool withdraw(double bal) { balance -=bal; cout << "In withdraw" << endl; return false;}
    
};


int main() {
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 500.00;
    frank_account.deposit(1000.0);
    frank_account.withdraw(100.0);
        
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");
    
    Player *enemy = new Player; //creating dynalic memory allocation
    (*enemy).name = "Enemy";
    (*enemy).health = 50;
    enemy->xp = 15;
    
    enemy->talk("What's up!");
    
    return 0;
}