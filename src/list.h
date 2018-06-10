#ifndef LIST_H
#define LIST_H

#include <iostream>

class List
{
    private:
        struct node
	{
            int data;
            node *prev;
            node *next;
        };
        node *head = NULL;
        node *tail = NULL;
    public:
        void addToTail(int);
        void addToHead(int);
        void deleteNode(node *nodeToDelete);
        void toString(void);
};

#endif
