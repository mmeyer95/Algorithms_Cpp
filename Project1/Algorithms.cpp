#include <iostream>
#include "math.h"
#include "LL.h"
#include "BST.h"

int main() {
	bool LinkedList = false;
	bool BST = true;

	//Linked List implementation
	if (LinkedList == true) {
		LL_Insert(5);
		LL_Insert(10);
		LL_Insert(11);
		LL_Insert(6);

		std::cout << "Linked list: \n" << std::endl;
		LL_PrintLinkedList();

		LL_Remove(10);
		std::cout << "Linked list: \n" << std::endl;
		LL_PrintLinkedList();

		LL_Remove(5);
		std::cout << "Linked list: \n" << std::endl;
		LL_PrintLinkedList();

		LL_Insert(22);
		std::cout << "Linked list: \n" << std::endl;
		LL_PrintLinkedList();
	}

	//Binary Search Tree implementation
	if (BST == true) {
		BST_Insert(5);
		BST_Insert(10);
		BST_Insert(11);
		BST_Insert(6);
	}

	system("pause");
	return 0;
}