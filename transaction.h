#pragma once
#include "instruction.h"
#include <string>
class Transaction
{
private:
    std::string type;
    Instruction* instructions;

public:
    Transaction(int fID, int toID, int amt, std::string des, std::string  typ);
    void executeTransaction();
    void revertTransaction();
};