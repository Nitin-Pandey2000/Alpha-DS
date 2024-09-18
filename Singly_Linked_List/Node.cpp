#include "Node.h"

Node::Node()
{
	m_pNext = nullptr;
}

Node::~Node()
{
	m_pNext = nullptr;
}

void Node::SetData(int iData)
{
	m_data = iData;
}

int Node::GetData()
{
	return m_data;
}

void Node::SetNext(Node* ipNext)
{
	m_pNext = ipNext;
}

Node* Node::GetNext()
{
	return m_pNext;
}
