#include <iostream>
#include "list.h"

int List::numberOfNodes = 0;

void List::addToHead(int value) {
	node *temp=new node;
	temp->data=value;
	temp->next=head;
	head=temp;
	numberOfNodes++;
}

void List::addToTail(int value) {
	node *temp = new node;
	temp->data = value;
	temp->next = NULL;
	if(head == NULL) {
		head = temp;
		tail = temp;
		temp = NULL;
    } else {	
        tail->next = temp;
        tail = temp;
    }
	numberOfNodes++;
}

void List::toString() {
	node *temp = new node;
	temp=head;
	while(temp!=NULL) {
		std::cout << temp->data <<"\t";
		temp = temp->next;
	}
	std::cout << std::endl;
}
