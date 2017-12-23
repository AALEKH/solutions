#include <algorithm>
#include <iostream>

struct node {
	int key;
	struct node *left;
	struct node *right;
};

struct node* newNode(int key) {
	struct node* root = (struct node*)malloc(sizeof(struct node));
	root->key = key;
	root->left = root->right = NULL;
	return root;
}

void insertNode(struct node *root, int key) {
	if(root == NULL){
		root = newNode(key);
		return;
	}
		
	if(root->key > key)
		insertNode(root->left, key);
	else
		insertNode(root->right, key);

	return;
}

void inorder(struct node *root) {
	if(root == NULL)
		return;
	inorder(root->left);
	std::cout << root->key << std::endl;
	inorder(root->right);
}

int main() {
	struct node *root = newNode(4);
	struct node *root2 = root;
	root->left = newNode(2);
	root->right = newNode(5);
	root->left->left = newNode(1);
	root->left->right = newNode(3);
	insertNode(root2, 10);
	inorder(root);
	return 0;
}