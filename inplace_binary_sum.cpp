#include <iostream>

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

int convertBinarySum(struct node * root){
	if(root == NULL)
		return 0;

	int left  = convertBinarySum(root->left);
	int right = convertBinarySum(root->right);

	int old = root->key;
	root->key = left + right;
	return old+root->key;
}

int main() {
	// Did not write node creation and check code, since was too bored with monotonous task here.
	return 0;
}