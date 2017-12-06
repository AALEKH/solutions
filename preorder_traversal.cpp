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
	struct node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 

    preorder(root1);

    return 0;
 	
}