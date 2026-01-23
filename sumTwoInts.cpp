#include <iostream>

int main() {
    std::cout << "Enter two numbers, separated by a space: " ;

    int numA { };
    int numB { };
    std::cin >> numA >> numB;

    std::cout << "When added together, the sum of the two numbers selected is: " << numA +numB << '\n';

    return 0;
}