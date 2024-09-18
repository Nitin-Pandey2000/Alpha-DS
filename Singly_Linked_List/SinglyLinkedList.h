#pragma once
#include "Node.h"

class SinglyLinkedList
{
public:
	SinglyLinkedList();
	~SinglyLinkedList();

	void InsertFirst(int iData);
	void InsertLast(int iData);
	void PrintList();

private:
	Node* m_pHead;
};