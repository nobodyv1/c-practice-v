#include <iostream>

int main()
{
    std::cout<< "*********************CALCULATER*******************"<< '\n';
    
    char op;
    double num1;
    double num2;
    double result;

    std::cout<< "Entre any operation '+,-,*,/':  ";
    std::cin>> op ;

    std::cout<< "Enter the first number:  ";
    std::cin>> num1;

    std::cout<< "Enter the second number:  ";
    std::cin>> num2;


    switch (op)
    {
    case '+':
        result = num1+num2;
        break;
    case '-':
        result = num1-num2;
        break;
    case '*':
        result = num1*num2;
        break;
    case '/':
        result = num1/num2;
        break;
    default:
    std::cout<< "valid input";
        break;
    }

    std::cout<< "The result: " << result << '\n';

    std::cout<< "**************************************************";

    return 0;
}