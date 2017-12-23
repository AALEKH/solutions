#include <iostream>

struct node {
	int key;
	struct node* left;
	struct node* right;
};

struct node* newNode(int key) {
	struct node* root = (struct node*)malloc(sizeof(struct node));
	root->key = key;
	root->left = root->right = NULL;
	return root;
}

bool isBST(node* root, int min, int max) {
	if(root == NULL)
		return true;

	if(root->key > max || root->key < min)
		return false;

	return isBST(root->left, min, root->key) 
				&& isBST(root->right, root->key, max);
}

int main() {
	// Here goes the execution code
}