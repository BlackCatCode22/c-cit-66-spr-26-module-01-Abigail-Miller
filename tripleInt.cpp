#include <iostream>

int main() {
    std::cout << "Enter a number: ";

    int num { };
    std::cin >> num;

    std::cout << "When tripled, your number is equal to " << num * 3 << '\n';

    return 0;
}