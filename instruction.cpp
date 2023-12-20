#include "instruction.h"

Instruction::Instruction(int fID, int tID, int amt, std::string des)
{
    fromId = fID;
    toId = tID;
    amount = amt;
    description = des;

}

    int Instruction::getfromId()
    {
        return fromId;
    }
    int Instruction::gettoId()
    {
        return toId;
    }
    int Instruction::getAmount()
    {
        return amount;
    }