#pragma once
#include <iostream>
#include "math.h"

//BST NODE CLASS
class BSTNode {
public:
	BSTNode * parent;
	BSTNode * left;
	BSTNode * right;
	int value;
};

BSTNode * root;

//INSERT A NODE IN BST
BSTNode * BST_Insert(BSTNode * node, int value) {
	if (node == NULL) {
		node = new BSTNode;
		node->value = value;
		node->left = NULL;
		node->right = NULL;
		node->parent = NULL;
	}
	else if (value < node->value) {
		node->left = BST_Insert(node->left, value);
		node->left->parent = node;
	}
	else if (value > node->value){
		node->right = BST_Insert(node->right, value);
		node->right->parent = node;
	}

	return node;
}
//Insert overload
void BST_Insert(int value) {
	root = BST_Insert(root, value);
}

//REMOVE A NODE FROM BST
BSTNode * BST_Remove(BSTNode * node, int value) {
	if (node == NULL) {
		std::cout << "Node not found." << std::endl;
		return node;
	}
	if (node->value < value) {
		node->right = BST_Remove(node->right, value);
	}
	else if (node->value > value) {
		node->left = BST_Remove(node->left, value);
	}
	else {

	}
	return node;
}
//Remove overload
void BST_Remove(int value) {
	root = BST_Remove(root, value);
}

//PRINT ALL NODES IN ASCENDING ORDER
void BST_PrintNodesInOrder(BSTNode * node) {
	if (node == NULL) {
		return;
	}
	BST_PrintNodesInOrder(node->left);
	std::cout << node->value <<", ";
	BST_PrintNodesInOrder(node->right);
	return;
}
//Print nodes overload
void BST_PrintNodesInOrder() {
	std::cout << "Nodes in order are: ";
	BST_PrintNodesInOrder(root);
	std::cout << "\n";
}

//SEARCH BST FOR NODE
BSTNode * BST_Search(BSTNode * node, int value) {
	if (node == NULL) {
		return NULL;
	}
	else if (value < node->value) {
		bool found = BST_Search(node->left, value);
	}
	else if (value > node->value) {
		bool found = BST_Search(node->right, value);
	}
	else {
		return node;
	}
}
//Search overload
void BST_Search(int value) {
	BSTNode * node = BST_Search(root, value);
	if (node==NULL) {
		std::cout << "Value " << value << " not found." << std::endl;
	}
	else {
		std::cout << "Value " << node->value << " found." << std::endl;
	}
}

//FIND MINIMUMUM VALUE NODE
int BST_FindMin(BSTNode * node)
{
	if (node == NULL)
		return -1;
	else if (node->left == NULL)
		return node->value;
	else
		return BST_FindMin(node->left);
}
//Minimum overload
void BST_FindMin() {
	int min = BST_FindMin(root);
	if (min == -1) {
		std::cout << "No nodes in tree." << std::endl;
	}
	else {
		std::cout << "Minimum value is: " << min << std::endl;
	}
}

//FIND MAXIMUM VALUE NODE
int BST_FindMax(BSTNode * node)
{
	if (node == NULL)
		return -1;
	else if (node->right == NULL)
		return node->value;
	else
		return BST_FindMax(node->right);
}
//Maximum overload
void BST_FindMax() {
	int max = BST_FindMax(root);
	if (max == -1) {
		std::cout << "No nodes in tree." << std::endl;
	}
	else {
		std::cout << "Maximum value is: " << max << std::endl;
	}
}