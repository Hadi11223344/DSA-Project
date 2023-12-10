#include "transaction.h"
#pragma once

class LinkedList {
private:
    class Node {
    public:
        Transaction data;
        Node* next;
    };

    Node* head;
    Node* tail;

public:
    void addNode(Transaction transaction);
    void removeNode(Transaction transaction);
    void traverseList();
};