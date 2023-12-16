#pragma once
#include <string>

class Instruction
{
private:
    int fromId;
    int toId;
    int amount;
    std::string description;

public:
    Instruction(int fID, int toID, int amt, std::string des);

    int getfromId();
    int gettoId();
    int getAmount();
};