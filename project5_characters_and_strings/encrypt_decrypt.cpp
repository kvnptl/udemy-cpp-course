#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
        
    cout << "Enter your secret message: ";
    string msg;
    getline(cin, msg);

    string encrypted_msg;
    string decrypted_msg;
    
    cout << "\nEncrypting message..." << endl;
    
    for (auto c: msg){
        int a = alphabet.find(c);
        
        if (a != -1){
            encrypted_msg.push_back(key.at(a)); 
        }
        else{
            encrypted_msg.push_back(c);
        }
        
    }
    
    std::cout << "\nEncrypted message: " << encrypted_msg << std::endl;
    
    cout << "\nDecrypting message..." << endl;
    
    for (auto c: encrypted_msg){
        int a = key.find(c);
        
        if (a != -1){
            decrypted_msg.push_back(alphabet.at(a)); 
        }
        else{
            decrypted_msg.push_back(c);
        }
    }
    
    std::cout << "\nDecrypted message: " << decrypted_msg << std::endl;
    
    return 0;
}