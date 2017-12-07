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

int preorder(node* nod) {
	if(nod == NULL){
		return 0;
	}
    std::cout << nod->key << " ";
    preorder(nod->left);
    preorder(nod->right);
    return 0;
	// return max(height(nod->left), height(nod->right)) + 1;
}

int main() {
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);

    preorder(root);

    return 0;
 	
}