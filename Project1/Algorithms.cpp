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
		BST_Insert(23);
		BST_Insert(12);
		BST_Insert(15);
		BST_Insert(31);
		BST_Insert(88);
		BST_Insert(15);
		BST_Insert(3);
		BST_Insert(7);
		BST_Insert(29);
		BST_Insert(53);

		BST_PrintNodesInOrder();
		BST_FindMax();
		BST_FindMin();
		BST_Search(31);
		BST_Search(2);

		BST_Remove(31);
		BST_Insert(2);
		BST_Insert(100);
		BST_Insert(95);
		BST_Insert(98);
		BST_PrintNodesInOrder();
		BST_FindMax();
		BST_FindMin();

		BST_Remove(98);
		BST_PrintNodesInOrder();
		BST_Search(31);
		BST_Search(2);

	}

	system("pause");
	return 0;
}