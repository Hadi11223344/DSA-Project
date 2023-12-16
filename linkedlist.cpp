#include "linkedlist.h"
#include <iostream>

LinkedList::Node::Node()
{
    next = NULL;
}

void LinkedList::Node::setData(Transaction d)
{
    data = d;
}
void LinkedList::Node::setNext(Node *n)
{
    next = n;
}
Transaction LinkedList::Node::getData()
{
    return data;
}
LinkedList::Node* LinkedList::Node::getNext()
{
    return next;
}

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}

void LinkedList::addNode(Transaction transaction)
{
    std::cout << "Transaction has been added to linked list" << std::endl;
}
void LinkedList::removeNode(Transaction transaction)
{
    std::cout << "Transaction has been removed from linked list" << std::endl;
}
void LinkedList::traverseList()
{   
    std::cout << "Traversing linked list" << std::endl;
}