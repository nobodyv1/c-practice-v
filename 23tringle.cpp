#include <iostream>

int main() {
    int n = 5; // number of rows

    for (int i = 0; i < n; i++) {
        // print spaces to indent
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }

        // print the triangle's side
        for (int k = 0; k <= i; k++) {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }

    return 0;
}