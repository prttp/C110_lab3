#pragma once
#include <iostream>
struct Node {
	int val;
	Node* pNext;
};



struct MyList {
	Node* pHead;
	size_t size;
};

void initList(MyList& list);
void addToHead(int val, MyList& list);
void printList(const MyList& list);
void removeOne(int val, MyList& list);
void removeAll(int val, MyList& list);
void destroyList(MyList& list);