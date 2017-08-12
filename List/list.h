#ifndef LIST_H
#define LIST_H

#include <iostream>

class List{
    private:
        struct node{
            int data;
            node *next;
        };
        node *head = NULL;
        node *tail = NULL;
        static int numberOfNodes;
    public:
        void addToTail(int value);
        void addToHead(int value);
        void toString(void);
};

#endif
