// The logic of this recursive code is that both left and right element will propogate together and for same length propogation we
// imply first condition (i.e; x&&y)

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

int isIdentical(node *x, node *y) {
	if(x == NULL && y == NULL) 
		return 1;

	return (x && y) && (x->key == y->key) && isIdentical(x->left, y->left) && isIdentical(x->right, y->right);
}

int main() {
	struct node *root1 = newNode(1);
    struct node *root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 
 
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);

    if(isIdentical(root1, root2))
        std::cout << "Both tree are identical." << std::endl;
    else
         std::cout << "Trees are not identical." << std::endl;

    return 0;
 	
}