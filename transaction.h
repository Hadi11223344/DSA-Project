#pragma once
#include "instruction.h"
#include <string>

enum class TransactionType{payable, recieveable};

class Transaction
{
private:
    TransactionType type;
    Instruction* instructions;

public:
    Transaction(int fID, int toID, int amt, std::string des, TransactionType  typ);
    void executeTransaction();
    void revertTransaction();
};