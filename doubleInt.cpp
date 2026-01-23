#include <iostream>

int main() {
    std::cout << " Please input a number: ";

    int num {};
    std::cin >> num;

    std::cout << "When doubled, your number is equal to " << num * 2 << '\n' ;
    return 0;
}