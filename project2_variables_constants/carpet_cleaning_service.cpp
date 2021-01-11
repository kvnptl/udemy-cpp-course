#include <iostream>

using namespace std;

int main(){
    
    const int small_room_price {25};
    const int large_room_price {35};
    const double tax {0.06};
    
    cout << "Welcome to the Kevin's Carpet cleaning service\n";
    
    cout << "Number of small rooms: ";
    int small_rooms;
    cin >> small_rooms;
    
    cout << "Number of large rooms: ";
    int large_rooms;
    cin >> large_rooms;
    
    cout << "\nPrice per small room: $25\n";
    cout << "Price per large room: $35\n";

    cout << "Cost: " << (small_rooms*small_room_price) + (large_rooms*large_room_price) << endl; 
    int cost = (small_rooms*small_room_price) + (large_rooms*large_room_price);
    cout << "Tax: " << cost*tax << endl;
    
    cout << "===================================\n";
    
    cout << "Total estimate: $" << (cost + cost*tax) << endl;
    
    cout << "This estimate is valid for 30 days" << endl;
    return 0;
}