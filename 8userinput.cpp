#include <iostream>

int main(){

    std::string name;
    int age;
    std::string fullName;

    
    std::cout << "what is your name? :  ";
    std::cin >> name;

    std::cout << "what is your  age? :  ";
    std::cin >> age;
    
    std::cout << "Hello " << name; 
    std::cout << "  your are "<< age << "years  old " << '\n';

    std::cout << "what is your full name?: ";
    std::getline(std::cin >> std::ws, fullName);
    std::cout << "  hello  " << fullName;

    return 0;


    }