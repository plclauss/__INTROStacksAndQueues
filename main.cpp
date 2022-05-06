#include <iostream>
#include "stack.h"

int main() {
    Stack instance;

    std::string s,t;
    s = "y#fo##f";
    t = "y#f#o##f";
    std::cout << instance.backspaceCompare(s,t) << std::endl;

    return 0;
}
