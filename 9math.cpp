#include <iostream>
#include <cmath>

// the question of this code is in 9math.png
int main()
{
    double a;
    double b;
    double c;

    std::cout << "enter side A: ";
    std::cin >> a;

    std::cout << "enter side b: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    // or you can say c = sqrt(pow(a, 2)+pow(b, 2));

    std::cout << "side c: " << c;


return 0;

}
