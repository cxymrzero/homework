/* 读入若干个数字的输入直到输入ctrl+d */
#include <iostream>
int main() {
    std::cout << "Enter two nums: " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    int lower, upper;
    if (v1 >= v2) {
        lower = v2;
        upper = v1;
    } else {
        lower = v1;
        upper = v2;
    }

    int sum = 0;
    for (int i=lower; i<=upper; i++) {
        sum += i;
    }
    std::cout << "Sum from " << lower << " to " << upper
        << " is " << sum << std::endl;
    return 0;
}
