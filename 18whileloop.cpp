#include <iostream>

int main()
{
    std::string name;

    while(name.empty()){
        std::cout << "enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "hello " << name;

    return 0;
}