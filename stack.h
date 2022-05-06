//
// Created by plcla on 5/4/2022.
//

#ifndef STACKS_QUEUES_LEETCODESOLUTIONS_STACK_H
#define STACKS_QUEUES_LEETCODESOLUTIONS_STACK_H

#include <iostream>
#include <string>
#include <vector>
#include <stack>

class Stack {
private:
    bool validatePair(char& charInStack, char& charInList);
public:
    bool isValid(std::string& s);
    int32_t calPoints(std::vector<std::string>& ops);
    bool backspaceCompare(std::string s, std::string t);
    std::string removeOuterParenthesis(std::string s);
    std::string simplifyPath(std::string path);
};

#endif //STACKS_QUEUES_LEETCODESOLUTIONS_STACK_H
