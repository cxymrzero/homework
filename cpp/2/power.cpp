#include <iostream>
int main() {
    int base(1), exponent = 0;
    std::cout << "input base: ";
    std::cin >> base;
    std::cout << "input exponent: ";
    std::cin >> exponent;

    int result = 1;
    for (int i=0; i<exponent; i++) {
        result *= base;
    }
    std::cout << "result is " << result << std::endl;
    return 0;
}
