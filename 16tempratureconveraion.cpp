#include <iostream>

int main()
{
    char degree;
    double F;
    double C;

    std::cout<< "*********************TempratureConverture********************* \n";
    
    std::cout<< "Enter F for fahrenheit and C for celsius to convert: ";
    std::cin>> degree;

    if (degree == 'F' || degree == 'f')
    {
        std::cout<< "Enter your number? \n";
        std::cin>> C;

        std::cout<< "conver to FAHRENHEIT: " << C * 9/5 + 32;
    }
    else if (degree == 'C' || degree == 'c')
    {
        std::cout<< "Enter your number? \n";
        std::cin>> F;

        std::cout<< "conver to Celsius: " << (F - 32) * 5/9;
    }
    else
    {
        std::cout<< "You are enterd valid \n ";
    }
    
    std::cout<< "\n******************************************************* \n";

    return 0;
}