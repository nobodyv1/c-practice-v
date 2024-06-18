#include <iostream>
#include <ctime>

int main ()
{
    srand(time(0));
    int randnum = rand()% 5+1;

    switch (randnum)
    {
    case 1:
        std::cout << "you win a bumper sticker!\n";
        break;
    case 2:
        std::cout << "you win a t-shert!\n";
        break;
    case 3:
        std::cout << "you win a sometingr!\n";
        break;
    case 4:
        std::cout << "you win a someting!\n";
        break;
    case 5:
        std::cout << "you win someting!\n";
        break;
    
    
    
    

    return 0;
}
}
