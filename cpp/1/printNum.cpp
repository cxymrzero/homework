#include <iostream>
int main() {
    int lower = 1000, upper = 2000;
    int cnt = 0;
    for (int i=lower+1; i<upper; i++, cnt++) {
        if (!(cnt % 10))
            std::cout << std::endl;
        std::cout << i << " ";
    }
    return 0;
}
