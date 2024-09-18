#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList()
{
	m_pHead = new Node();
	m_pHead->SetNext(nullptr);
}

SinglyLinkedList::~SinglyLinkedList()
{
	delete m_pHead;
	m_pHead = nullptr;
}

void SinglyLinkedList::InsertFirst(int iData)
{
	// create a new node and give it the value you want
	Node* pNewNode = new Node();
	pNewNode->SetData(iData);

	//get the next address of the head node and set it to next of the new node
	Node* pHeadNext = m_pHead->GetNext();
	pNewNode->SetNext(pHeadNext);

	//set the head's next as new node now
	m_pHead->SetNext(pNewNode);
}

void SinglyLinkedList::InsertLast(int iData)
{
	// create a new node and give it the value you want and set the next as null
	Node* pNewNode = new Node();
	pNewNode->SetData(iData);
	pNewNode->SetNext(nullptr);

	if (m_pHead->GetNext() == nullptr)
	{
		m_pHead->SetNext(pNewNode);
		return;
	}

	//get the 1st node and the point it by some iterator of type node and iterate it till last node
	Node* pItrNode = m_pHead->GetNext();
	while (pItrNode->GetNext() != nullptr)
	{
		pItrNode = pItrNode->GetNext();
	}

	//now we have the last node which is pointed by pItrNode we can now set it's next as new node
	pItrNode->SetNext(pNewNode);
}

void SinglyLinkedList::PrintList()
{
	std::cout << "Here is the List" << std::endl;

	//take an iterator of type Node and iterate it from firt to last node and print the data
	Node* pItrNode = m_pHead->GetNext();
	while (pItrNode != nullptr)
	{
		std::cout << pItrNode->GetData();
		if (pItrNode->GetNext() != nullptr)
		{
			std::cout << " ---------------> ";
		}
		pItrNode = pItrNode->GetNext();
	}
	std::cout << std::endl;
}