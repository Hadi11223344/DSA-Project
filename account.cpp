#include "account.h"

Account::Account(std::string title, int balance, unsigned int pin)
{   
    this->pin = pin;
    this->id = randomIdGenerator(10);
    this->title = title;
    this->balance = balance;
    Transaction *transactionHistory = NULL;
}

unsigned int Account::getID()
{
    return id;
}
std::string Account::getTitle()
{
    return title;
}
int Account::getBalance()
{
    return balance;
}
unsigned int Account::getPin(){
    return pin;
}

Transaction* Account::getTransactionHistory(){

    return transactionHistory;
}
unsigned int Account::randomIdGenerator(unsigned int numDigits)
{
    unsigned int minValue = static_cast<unsigned int>(std::pow(10, numDigits - 1));
    unsigned int maxValue = static_cast<unsigned int>(std::pow(10, numDigits) - 1);

    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number within the specified range
    unsigned int randomNumber = minValue + std::rand() % (maxValue - minValue + 1);

    return randomNumber;
}
