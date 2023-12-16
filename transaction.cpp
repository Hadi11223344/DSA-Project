#include "transaction.h"
#include <iostream>
// class Transaction {
// private:
//     string type;
//     LinkedList instructions;

// public:
//     void executeTransaction();
//     void revertTransaction();
// };
    void Transaction::executeTransaction(){
        std::cout << "Transaction executed" << std::endl;
    }
    void Transaction::revertTransaction(){
        std::cout << "Transaction reverted" << std::endl;
    }