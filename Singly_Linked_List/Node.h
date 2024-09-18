#pragma once

#include <iostream>

class Node
{
public:
	Node();
	~Node();
	void SetData(int iData);
	int GetData();
	void SetNext(Node* ipNext);
	Node* GetNext();

private:
	int m_data;
	Node* m_pNext;

};

