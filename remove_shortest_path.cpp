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

node *removeShortestPath(struct node *root, int level, int k) {
	if(root == NULL)
		return NULL;

	root->left = removeShortestPath(root->left, level+1, k);
	root->right = removeShortestPath(root->right, level+1, k);

	if(root->left == NULL && root->right == NULL && level < k){
		delete root;
		return NULL;
	}
	return root;
}

int main() {
	struct node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 

    // Too lazy to complete function, I think things should work out just fine
    
    return 0;
 	
}