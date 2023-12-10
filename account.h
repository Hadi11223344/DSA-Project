#pragma once
#include <string>

class Account {
private:
    int id;
    std::string title;
    int balance;

public:
    Account(int id, std::string title, int balance);
    int getID();
    std::string getTitle();
    int getBalance();
};