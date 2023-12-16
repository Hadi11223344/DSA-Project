#include "transaction.h"
#pragma once

class LinkedList {
private:
    class Node {
    public:
        Transaction data;
        Node* next;
        Node();
        
        void setData(Transaction d);
        void setNext(Node* n);
        Transaction getData();
        Node* getNext();
    };

    Node* head;
    Node* tail;

public:
    LinkedList();
    void addNode(Transaction transaction);
    void removeNode(Transaction transaction);
    void traverseList();
};