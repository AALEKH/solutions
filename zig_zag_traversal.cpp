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

int max(int a, int b) {
	return (a>b)?a:b;
}

int height(node* nod) {
	if(nod == NULL){
		return 0;
	}

	return max(height(nod->left), height(nod->right)) + 1;
}

void printLevel(struct node* nd, int level, bool value) {
	if(nd == NULL)
		return;
	else if(level == 1)
		std::cout << nd->key << " ";
	else if(value) {
		printLevel(nd->left, level-1, value);
		printLevel(nd->right, level-1, value);
	} else {
		printLevel(nd->right, level-1, value);
		printLevel(nd->left, level-1, value);
	}
}

void printSpiral(struct node* root)
{
    int h = height(root);
    int i;
 
    bool ltr = false;
    for(i=1; i<=h; i++)
    {
        printLevel(root, i, ltr);
 		std::cout << "\n";
        ltr = !ltr;
    }
}

int main() {
	struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);

    std::cout << "Printing out spiral order" << std::endl;
    printSpiral(root);
    return 0;
}
