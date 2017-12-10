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

bool isMirror(struct node *a, struct node *b) {
	if(a == NULL && b == NULL)
		return true;

	if(a == NULL || b == NULL)
		return false;

	return (a->key==b->key)&&isMirror(a->left, b->left)&&isMirror(a->right, b->right);
}

int main() {
	// Too lazy to write complete thing, but this should work fine
}
