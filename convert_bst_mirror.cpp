#include <iostream>
#include <algorithm>

struct node {
	int key;
	struct node *left;
	struct node *right;
};

struct node* newNode(int key)
{
    struct node* node = (struct node*)
                             malloc(sizeof(struct node));
    node->key  = key;
    node->left  = NULL;
    node->right = NULL;
 
    return(node);
}

void convertMirror(node *root) {
	if(root == NULL)
		return;

	convertMirror(root->left);
	convertMirror(root->right);
	std::swap(root->left, root->right);
}

int main() {
	return 0;
}