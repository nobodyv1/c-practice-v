#include <iostream>

int main ()
{
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand() % 100)+ 1;

    std::cout<< "************* number gussing game ***************";
    do
    {
        std::cout<< "enter a guss between (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "too low! \n";
        }
        else if (guess < num)
        {
            std::cout << "too high! \n";
        }
        else
        {
            std::cout << "correct # of tries:"
        }
        
    } while (/* condition */);
    


    return 0;
}