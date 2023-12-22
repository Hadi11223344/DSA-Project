#include "transaction.h"
#include "account.h"
#pragma once

class Node
{
public:
    Transaction* data;
    Node *next;
    Node(int fID, int toID, int amt, std::string des, TransactionType typ);
    void setNext(Node *n);
    Transaction* getData();
    Node *getNext();
};

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList();
    void addNode(Account *account);
    void removeNode(Account *account);
    void traverseList();
};