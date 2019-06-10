#include <iostream>
#include "math.h"
#include "LL.h"

int main() {
	bool LinkedList = false;
	bool BST = true;

	//Linked List implementation
	if (LinkedList == true) {
		Insert(5);
		Insert(10);
		Insert(11);
		Insert(6);

		std::cout << "Linked list: \n" << std::endl;
		PrintLinkedList();

		Remove(10);
		std::cout << "Linked list: \n" << std::endl;
		PrintLinkedList();

		Remove(5);
		std::cout << "Linked list: \n" << std::endl;
		PrintLinkedList();

		Insert(22);
		std::cout << "Linked list: \n" << std::endl;
		PrintLinkedList();
	}

	//Binary Search Tree implementation
	if (BST == true) {

	}

	system("pause");
	return 0;
}