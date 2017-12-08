#include <iostream>
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

struct node *lca(struct node *root, int n1, int n2) {
	if(root == NULL)
		return NULL;
	if(root->key < n1 &&root->key < n2)
		return lca(root->right, n1, n2);
	if(root->key > n1 && root->key > n2)
		return lca(root->left, n1, n2);
	return root;
}

int main() {
	struct node *root1 = newNode(4);
    root1->left = newNode(2);
    root1->right = newNode(5);
    root1->left->left  = newNode(1);
    root1->left->right = newNode(3); 

    struct node *nd = lca(root1, 1, 3);
    std::cout << "Common Ancestor is: " << nd->key << std::endl;
    return 0;
 	
}