#include "linkedlist.h"
#include "transaction.h"
#include <iostream>
Node::Node(int fID, int toID, int amt, std::string des, std::string typ)
{   
    data = new Transaction( fID, toID,  amt, des, typ);
    next = NULL;
}

void Node::setNext(Node *n)
{
    next = n;
}
Transaction* Node::getData()
{
    return data;
}
Node* Node::getNext()
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