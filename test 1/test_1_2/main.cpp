#include <iostream>

int readNumber();
void printAnswer(int a);

int main() {
    int a = readNumber();
    int b = readNumber();
    printAnswer(a + b);
}
