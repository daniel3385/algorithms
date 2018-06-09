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

int List::deleteNth(int position) {
	if(position > numberOfNodes || position < 1)
		return 0;
    if(position == 1) {
		node *tmp = head;
		head = head->next;
		delete(tmp);
	} else {
		node *runner  = head;
		while(--position > 1)
			runner = runner->next;
		node *tmp = runner->next;
		runner->next = runner->next->next;
		if(runner->next == NULL)
			tail = runner;
		delete(tmp);
	}
	numberOfNodes--;
	return 1;
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
