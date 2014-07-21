#include <iostream>
int main() {
    int sum = 0;
    for (int i=50; i<=100; i++) {
        sum += i;
    }
    std::cout << "Sum of 50 to 100: " << sum << std::endl;

    int whilesum = 0;
    int i = 50;
    while (i<=100) {
        whilesum += i;
        i++;
    }
    std::cout << "Sum of 50 to 100: " << whilesum << std::endl;
    return 0;
}
