//
// Created by plcla on 5/4/2022.
//

#include "stack.h"

bool Stack::validatePair(char &charInStack, char &charInList) {
    if (charInStack == '(' && charInList == ')')
        return true;
    else if (charInStack == '{' && charInList == '}')
        return true;
    else if (charInStack == '[' && charInList == ']')
        return true;

    return false;
}

bool Stack::isValid(std::string& s) {
    std::stack<char> newStack;

    for (auto& it : s) {
        if (it == '(' || it == '{' || it == '[')
            newStack.push(it);
        else if (!newStack.empty() && validatePair(newStack.top(), it))
            newStack.pop();
        else
            return false;
    }

    if (newStack.empty())
        return true;
    return false;
}

int32_t Stack::calPoints(std::vector<std::string> &ops) {
    std::stack<int32_t> newStack;

    for (auto& it : ops) {
        if (it == "D") {
            if (!newStack.empty())
                newStack.top() *= 2;
            else
                continue;
        }
        else if (it == "C") {
            if (!newStack.empty())
                newStack.pop();
            else
                continue;
        }
        else if (it == "+") {
            if (newStack.size() >= 2) {
                int32_t pushFirst, pushSecond;
                pushSecond = newStack.top();
                newStack.pop();
                pushFirst = newStack.top();
                newStack.pop();

                int32_t sum = pushFirst + pushSecond;
                newStack.push(pushFirst);
                newStack.push(pushSecond);
                newStack.push(sum);
            }
            else
                continue;
        }
        else {
            newStack.push(std::stoi(it, nullptr, 10));
        }
    }

    int32_t sum = 0;
    for (int i = 0; i < newStack.size(); i++) {
        sum += newStack.top();
        newStack.pop();
    }
    return sum;
}
