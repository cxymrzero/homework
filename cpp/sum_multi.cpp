#include <iostream>
int main() {
    std::cout << "Enter two num" << std::endl;
    int n1, n2;
    std::cin >> n1 >> n2;
    std::cout << n1;
    std::cout << "+";
    std::cout << n2;
    std::cout << "=";
    std::cout << n1+n2 << std::endl;
    return 0;
}
