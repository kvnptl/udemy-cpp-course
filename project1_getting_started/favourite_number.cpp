#include <iostream>

int main(){
    
    int favourite_number;
    std::cout << "Enter your favourite number: ";
    std::cin >> favourite_number;
    std::cout << "Amazing! That is my favourite number too" << std::endl;
    std::cout << "No really, " << favourite_number << " is my favourite number" << std::endl;
    return 0;
}