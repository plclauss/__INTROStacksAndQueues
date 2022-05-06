#include <iostream>
#include "stack.h"

int main() {
    Stack instance;

    std::vector<std::string> vec = {"5", "2", "C", "D", "+"};
    std::cout << instance.calPoints(vec) << std::endl;

    return 0;
}
