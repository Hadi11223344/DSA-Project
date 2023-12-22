#pragma once
#include <string>
#include "transaction.h"
#include <cstdlib> // for rand()
#include <ctime>   // for time()
#include <math.h>

class Account {
private:
    int id;
    std::string title;
    int balance;
    Transaction* transactionHistory;
public:
    Account(std::string title, int balance);
    unsigned int getID();
    std::string getTitle();
    int getBalance();
    unsigned int randomIdGenerator(unsigned int numDigits);
};