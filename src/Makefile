CC=g++ -Wall -Werror -g

all: list queue

list:
	$(CC) -c list.cpp
	$(CC) -c exampleList.cpp
	$(CC) list.o exampleList.o -o exampleList

queue:
	$(CC) -c queue.cpp
	$(CC) -c exampleQueue.cpp
	$(CC) list.o queue.o exampleQueue.o -o exampleQueue
clean:
	rm *.o exampleList exampleQueue
