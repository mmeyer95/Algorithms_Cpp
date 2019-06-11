#pragma once
#include <iostream>
#include "math.h"


class BSTNode {
public:
	BSTNode * parent;
	BSTNode * left;
	BSTNode * right;
	int value;
};

BSTNode * root;

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

void BST_Insert(int value) {
	root = BST_Insert(root, value);
}

BSTNode * BST_Remove(BSTNode * root, int value) {

}

void BST_Remove(int value) {
	root = BST_Remove(root, value);
}

BSTNode * BST_PrintNodesInOrder(BSTNode * root) {
	return root;
}

void BST_PrintNodesInOrder() {
	root = BST_PrintNodesInOrder(root);
}

BSTNode * BST_Search(BSTNode * root, int value) {
	return root;
}

void BST_Search(int value) {
	root = BST_Search(root, value);
}