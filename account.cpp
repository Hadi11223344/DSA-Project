#include "account.h"

Account::Account(int id, std::string title, int balance){
        this->id = id;
        this->title = title;
        this->balance = balance;
}

    int Account::getBalance(){
        return balance;
    }
    std::string Account::getTitle(){
        return title;
    }
    int Account::getBalance(){
        return balance;
    }
    
