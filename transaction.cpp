#include "transaction.h"
#include <iostream>

    Transaction::Transaction(int fID, int toID, int amt, std::string des, TransactionType typ){
        instructions = new Instruction(fID, toID, amt, des);
        type = typ;
    }
    void Transaction::executeTransaction(){
        std::cout << "Transaction executed" << std::endl;
    }
    void Transaction::revertTransaction(){
        std::cout << "Transaction reverted" << std::endl;
    }
