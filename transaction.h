#pragma once
#include "linkedlist.h"
#include <string>
class Transaction {
private:
    std::string type;
    LinkedList instructions;

public:
    void executeTransaction();
    void revertTransaction();
};