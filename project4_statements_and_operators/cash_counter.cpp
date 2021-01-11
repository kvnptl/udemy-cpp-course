#include <iostream>

using namespace std;

int main(){
    
    cout << "Enter an amount in cents: ";
    
    int n;
    cin >> n;
    
    int dollars {0};
    int q {0};
    int dime {0};
    int nickle {0};
    int penny {0};
    
    
    if (n == 0){
        dollars = q = dime = nickle = penny = 0;
        cout << "Dollars: " << dollars << endl;
        cout << "Quarters: " << q << endl;
        cout << "Dime: " << dime << endl;
        cout << "Nickle: " << nickle << endl;
        cout << "Penny: " << penny << endl;
    }
    if (n >= 100){
        dollars = n/100;
        n = n % 100;
        cout << "Dollars: " << dollars << endl;
    }
    
    else {
        dollars = 0;
        cout << "Dollars: " << dollars << endl;
    }
    
    if (n >= 25){
        q = n/25;
        n = n % 25;
        cout << "Quarters: " << q << endl;
    }
    else {
        q = 0;
        cout << "Quarters: " << q << endl;
    }
    
    if (n >= 10){
        dime = n/10;
        n = n % 10;
        cout << "Dime: " << dime << endl;
    }
    else {
        dime = 0;
        cout << "dime: " << dime << endl;
    }
    
    if (n >= 5){
        nickle = n/5;
        n = n % 5;
        cout << "Nickle: " << nickle << endl;
    }
    else {
        nickle = 0;
        cout << "Nickle: " << nickle << endl;
    }
    
    if (n >= 1){
        penny = n/1;
        cout << "Penny: " << penny << endl;
    }
    else {
        penny = 0;
        cout << "Penny: " << penny << endl;
    }
    

//    std::cout << "My template" << std::endl;
    return 0;
}