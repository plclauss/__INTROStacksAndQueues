#include <iostream>
#include "stack.h"
#include "queue.h"

int main() {
    Stack instance;

    std::string s = "/a//b////c/d//././/..";
    std::cout << instance.simplifyPath(s) << std::endl;

    return 0;
}
