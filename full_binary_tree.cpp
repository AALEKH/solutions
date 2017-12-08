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

bool isFullTree(struct node *root) {
	if(root == NULL)
		return true;

	if((root->left)&&(root->right))
		return true;

	if(root->left && root->right)
		return isFullTree(root->left)&&isFullTree(root->right);

	return false;
}

int main() {
	struct node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 

	std::cout << "Is Full Tree: " << isFullTree(root1) << std::endl;

    return 0;
 	
}