#include <iostream>


int main ()
{
    int age;
    std::cout << "enter your age: ";
    std::cin >> age;

    if (age >=100 )
    {
        std::cout<< "you are too old to enter this site";
    }
    else if (age <= 18 ){

        std::cout << "you are under 18 ,you are not old enough";

    }
    else if (age >= 18 ){
        std::cout << "welcome to the site";

    }
    
    else if (age<=0)
    {
        std::cout<< "you haven't been born yet!";
    }
    


    return 0;
}