#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (item2.same_isbn(item1)) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    } else {
        std::cerr << "Not same isbn" << std::endl;
        return -1;
    }
}
