#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    
    char c {};    
    bool flag {true};
    vector<double> vec {};
    
    do{
        
        cout << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largesst number" << endl;
        cout << "Q - Quit" << endl;
        
        cout << "\nEnter your choice: ";
        cin >> c;        
        
        switch (c){
            case 'p':
            case 'P':{
                if (vec.size() == 0){
                    cout << "[] - the list is empty" << endl;
                }
                else{
                    cout << "[ ";
                    for (auto data: vec){
                        cout << data << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            }
            
            case 'a':
            case 'A':{
                
                cout << "Enter an integer to add to the list: ";
                long int num {};
                cin >> num;
            
                vec.push_back(num);
                
                cout << num << " is added" << endl;
                break;
            }
            
            
            case 'm':
            case 'M':{
                
                if (vec.size() == 0){
                    cout << "Unable to calculate mean - no data" << endl;
                }
                else{
                    double total {0};
                    for (auto num1: vec){
                        total = total + num1;
                    }
                    double mean {};
                    mean = total / vec.size();
                    
                    cout << "The mean is: " << mean << endl;;
                    break;
                }
            }
            
            case 's':
            case 'S':{
                int small {0};
                small = vec.at(0);
                
                for (auto num1: vec){
                    if (small > num1){
                        small = num1;
                    } 
                }
                
                cout << "The smallest number is: " << small << endl;;
                break;
            }
            
            case 'l':
            case 'L':{
                int large {0};
                large = vec.at(0);
                
                for (auto num1: vec){
                    if (large < num1){
                        large = num1;
                    } 
                }
                
                cout << "The largesr number is: " << large << endl;;
                break;
            }
            
            case 'q':
            case 'Q':{
                cout << "Goodbye..." << endl;
                flag = false;
                break;
            }
            
            default:
                cout << "Unknown selection, please try again" << endl;
                break;
        }
        
    } while(flag == true);
    
//    cout << "I am out" << endl;
//    std::cout << "My template" << std::endl;
    return 0;
}