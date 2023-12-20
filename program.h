#pragma once
#include "filemanager.h"
#include "account.h"
#include "transaction.h"
#include "linkedlist.h"

class Program {
private:
    FileManager fileManager;
    LinkedList transactionList;

public:
    Program();
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