#pragma once
#include <string>
#include "transaction.h"

class Account {
private:
    int id;
    std::string title;
    int balance;
    Transaction* transactionHistory;
public:
    Account(int id, std::string title, int balance);
    int getID();
    std::string getTitle();
    int getBalance();
};