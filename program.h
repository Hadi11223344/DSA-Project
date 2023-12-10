#pragma once
#include "filemanager.h"
#include "ui.h"
#include "account.h"
#include "transaction.h"
#include "linkedlist.h"

class Program {
private:
    FileManager fileManager;
    UI ui;
    LinkedList transactionList;
    Account account1, account2;
    Transaction transaction1, transaction2;

public:
    void run();
};