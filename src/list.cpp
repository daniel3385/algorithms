#include <iostream>
#include "list.h"


void List::addToHead(int value) {
    node *newNodePtr = new node;
    newNodePtr->data = value;
    if(tail == NULL) {
	// it is the first node
        tail = newNodePtr;
        head = newNodePtr;
    } else {
        newNodePtr->next = head;
        head->prev = newNodePtr;
        head = newNodePtr;
    }
}

void List::addToTail(int value) {
    node *newNodePtr = new node;
    newNodePtr->data = value;
    newNodePtr->next = NULL;
    if(head == NULL) {
	head = newNodePtr;
	tail = newNodePtr;
    } else {	
	tail->next = newNodePtr;
	tail = newNodePtr;
    }
}

void List::deleteNode(node *nodeToDeletePtr) {
   if(nodeToDeletePtr == tail) {
	nodeToDeletePtr = tail;
        tail = tail->prev;
        tail->next = NULL;
	delete nodeToDeletePtr;
    } else if(nodeToDeletePtr == head) {
	nodeToDeletePtr = head;
        head->next->prev = NULL;
        head = head->next;
	delete nodeToDeletePtr;
    } else {
        // FIXME: this else is broken
    }
}

void List::toString() {
    node *runner;
    runner=head;
    while(runner!=NULL) {
	std::cout << runner->data <<"\t";
	runner = runner->next;
    }
    std::cout << std::endl;
}
