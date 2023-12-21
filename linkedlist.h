#include "transaction.h"
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
    void addNode(Transaction transaction);
    void removeNode(Transaction transaction);
    void traverseList();
};