// Linked_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "SinglyLinkedList.h"

int main()
{
    std::cout << "Choose One Of The Options: " << std::endl;
    while (1)
    {
        int option = 0;
        std::cout << "1. Create A Singly Linked List" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cin >> option;
		bool bExit = false;
		SinglyLinkedList slist;
		switch (option)
		{
		case 1:
			std::cout << std::endl;
			while (1)
			{
				std::cout << "Choose One Of The Options: " << std::endl;
				std::cout << "1. Insert First" << std::endl;
				std::cout << "2. Insert Last" << std::endl;
				std::cout << "3. Print Linked List" << std::endl;
				std::cout << "4. Go To The Main Menu" << std::endl;
				int operation = 0;
				bool bBack = false;
				std::cin >> operation;
				int data = 0;
				switch (operation)
				{
				case 1:
					std::cout << "Enter the data: ";
					std::cin >> data;
					slist.InsertFirst(data);
					break;
				case 2:
					std::cout << "Enter the data: ";
					std::cin >> data;
					slist.InsertLast(data);
					break;
				case 3:
					slist.PrintList();
					break;
				case 4:
					bBack = true;
					break;
				default:
					std::cout << "Please Choose Correct Option..." << std::endl;
					break;
				}

				if (bBack)
				{
					break;
				}
			}
			break;
		case 2:
			bExit = true;
			break;
		default:
			std::cout << "Please Choose Correct Option..." << std::endl;
			break;
		}

		if (bExit)
		{
			break;
		}
    }
	
	return 0;
}