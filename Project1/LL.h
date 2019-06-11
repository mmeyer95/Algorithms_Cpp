#pragma once

class LLNode {
public:
	LLNode * next;
	int value;

};

LLNode * head;

LLNode * LL_Insert(LLNode * head, int value) {
	//If no node, create it
	if (head == NULL) {
		head = new LLNode;
		head->value = value;
		head->next = NULL;
	}
	//Otherwise, keep going through the list
	else {
		head->next = LL_Insert(head->next, value);
	}
	return head;
}

void LL_Insert(int value) {
	head = LL_Insert(head, value);
}

void LL_PrintLinkedList(LLNode * node) {
	if (node == NULL) {
		return;
	}
	std::cout << node->value << std::endl;
	LL_PrintLinkedList(node->next);
	return;
}

void LL_PrintLinkedList() {
	LL_PrintLinkedList(head);
}

LLNode * LL_Remove(LLNode * head, int value) {
	//deleting the head node
	if (head->value == value) {
		head = head->next;
	}
	else if (head->next->value == value) {
		head->next = head->next->next;
	}
	else {
		head->next = LL_Remove(head->next, value);
	}
	return head;
}

void LL_Remove(int value) {
	head = LL_Remove(head, value);
}