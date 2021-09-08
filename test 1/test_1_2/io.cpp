#include <iostream>

int readNumber() {
    std::cout << "Enter the integer number: ";
    int a;
    std::cin >> a;
    return a;
}

void printAnswer(int a) {
    std::cout << "The answer is " << a << std::endl;
}
