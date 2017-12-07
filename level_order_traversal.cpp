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

bool printLevel(node *root, int level) {
	if(root == NULL)
		return false;

	if(level == 1) {
		std::cout << root->key << " ";
		return true;
	} else{
		std::cout << "\n" << std::endl;
	}

	bool left = printLevel(root->left, level-1);
	bool right = printLevel(root->right, level-1);

	return left || right;

}

void levelOrder(node *root) {
	if(root == NULL)
		return;

	int level = 1;
	while(printLevel(root, level))
		level++;
}


int main() {
	struct node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 

    levelOrder(root1);

    return 0;
 	
}