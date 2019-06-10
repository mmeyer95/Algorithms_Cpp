#pragma once

class LLNode {
public:
	LLNode * next;
	int value;

};

LLNode * head;

LLNode * Insert(LLNode * head, int value) {
	//If no node, create it
	if (head == NULL) {
		head = new LLNode;
		head->value = value;
		head->next = NULL;
	}
	//Otherwise, keep going through the list
	else {
		head->next = Insert(head->next, value);
	}
	return head;
}

void Insert(int value) {
	head = Insert(head, value);
}

void PrintLinkedList(LLNode * node) {
	if (node == NULL) {
		return;
	}
	std::cout << node->value << std::endl;
	PrintLinkedList(node->next);
	return;
}

void PrintLinkedList() {
	PrintLinkedList(head);
}

LLNode * Remove(LLNode * head, int value) {
	//deleting the head node
	if (head->value == value) {
		head = head->next;
	}
	else if (head->next->value == value) {
		head->next = head->next->next;
	}
	else {
		head->next = Remove(head->next, value);
	}
	return head;
}

void Remove(int value) {
	head = Remove(head, value);
}