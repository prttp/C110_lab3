#include "MyList.h"

void initList(MyList& list) {
	list.pHead = nullptr;
	list.size = 0;
}
void addToHead(int val, MyList& list) {
	Node* tNode = new Node;
	tNode->pNext = list.pHead;
	tNode->val = val;
	list.pHead=tNode;
	list.size++;
	}
void printList(const MyList& list) {
	Node* tN = list.pHead;
	
	while (tN != 0) {
		std::cout << tN->val << ' ';
		tN = tN->pNext;
	} 
		
	std::cout << std::endl;
	
}
void removeOne(int val, MyList& list) {
	Node* tCurr = list.pHead;
	Node* tPrev = nullptr;
	do {
		if ((tCurr->val == val) && (tPrev == 0)) {
			list.pHead = tCurr->pNext;
			list.size--;
			delete tCurr;
			tCurr = nullptr;
			break;
		}
		if (tCurr->val == val) {
			tPrev->pNext = tCurr->pNext;
			list.size--;
			delete tCurr;
			tCurr = nullptr;
			break;
		}
		tPrev = tCurr;
		tCurr = tCurr->pNext;
	} while (tCurr != 0);
}
void removeAll(int val, MyList& list) {
	Node* tCurr = list.pHead;
	Node* tPrev = nullptr;
	do {
		if ((tCurr->val == val) && (tPrev == 0)) {
			list.pHead = tCurr->pNext;
			list.size--;
			delete tCurr;
			tCurr = list.pHead;
			continue;
		}
		if (tCurr->val == val) {
			tPrev->pNext = tCurr->pNext;
			list.size--;
			delete tCurr;
			tCurr = tPrev->pNext;
			continue;
		}
		tPrev = tCurr;
		tCurr = tCurr->pNext;
	} while (tCurr != 0);
}
void destroyList(MyList& list) {
	Node* tCurr = list.pHead;
	do {
		list.pHead = tCurr->pNext;
		list.size--;
		delete tCurr;
		tCurr = list.pHead;		
	} while (tCurr != 0);
	delete tCurr;
	}