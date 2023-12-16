#pragma once
#include "filemanager.h"
#include "account.h"
#include "transaction.h"
#include "linkedlist.h"

class Program {
private:
    FileManager fileManager;
    LinkedList transactionList;
    Account account1, account2;
    Transaction transaction1, transaction2;

public:
    void run();
    void ProcessUserInput(int n);
    void CreateAccount();
    void MakeTransaction();
    void DeleteAccount();
    void TransactionHistory();
    void Exit();
    void displayMenu();
    int getUserInput();

};