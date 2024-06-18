#include <iostream>

int main()
{
    int temp;
    bool sunny = false;
    
    std::cout << "Enter the temprature:  ";
    std::cin>> temp;

    // you can change and practice by && ,|| ,!
    if (temp <= 0 || temp >= 30)
    {
        std::cout<< "The temprature is bad! \n";
    }
    else{
        std::cout<< "the temprature is good \n";
    }

    if (!sunny){
        std::cout<< "it is cloudy outside!";
    }
    else{
        std::cout << "it is sunny outside!";
    }
    
    return 0;
}