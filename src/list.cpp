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

int List::deleteNode(node *nodeToDeletePtr) {
   if(nodeToDeletePtr == tail) {
	nodeToDeletePtr->data = tail->data;
        node *tmp = new node;
        tmp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete tmp;
    } else if(nodeToDeletePtr == head) {
	nodeToDeletePtr->data = head->data;
        node *tmp = new node;
        tmp = head;
        head->next->prev = NULL;
        head = head->next;
        delete tmp;
    } else {
        // FIXME: this else is broken
    }
}

void List::toString() {
    node *runner = new node;
    runner=head;
    while(runner!=NULL) {
	std::cout << runner->data <<"\t";
	runner = runner->next;
    }
    std::cout << std::endl;
}
