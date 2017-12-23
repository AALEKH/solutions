#include <iostream>

struct node {
	int key;
	struct node *left;
	struct node *right;
};

struct node* newNode(int key) {
	struct node* root = (struct node*)
							malloc(sizeof(struct node));
	root->key = key;
	root->left = root->right = NULL;
	return root; 
}

void search(node* root, int key, node* parent) {
	if(root == NULL){
		std::cout << "Node not found" << std::endl;
	}

	if(root->key ==  key){
		// if(parent == NULL )
		// 	std::cout << "The node with key " << key << " is root node" << std::endl;
		if(key < parent->key)
			std::cout << "The node key is left to " << parent->key << std::endl;
		else
			std::cout << "The node is right to " << parent->key << std::endl;
		return;
	}

	if(key < root->key)
		return search(root->left, key, root);
	else
		return search(root->right, key, root);
}

int main() {
	// Search node execution here
}