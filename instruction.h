#pragma once
#include <string>

class Instruction {
private:
    std::string fromId;
    std::string toId;
    int amount;
    std::string description;
    Instruction(){}
};