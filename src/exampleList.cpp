#include "list.h"

int main() {

    List list1;
    list1.addToTail(2);
    list1.addToTail(3);
    list1.addToTail(4);
    list1.addToTail(5);
    list1.addToHead(1);
    list1.toString();

    return 0;
}

