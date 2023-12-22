#pragma once
#include <string>
#include "transaction.h"
#include <cstdlib> // for rand()
#include <ctime>   // for time()
#include <math.h>

class Account {
private:
    unsigned int id;
    std::string title;
    int balance;
    unsigned int pin;
    Transaction* transactionHistory;
public:
    Account(std::string title, int balance, unsigned int pin);
    unsigned int getID();
    unsigned int getPin();
    std::string getTitle();
    Transaction* getTransactionHistory();
    int getBalance();
    unsigned int randomIdGenerator(unsigned int numDigits);
};