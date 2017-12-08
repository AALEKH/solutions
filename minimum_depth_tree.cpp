#include <iostream>
#include <vector>

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

int min(int a, int b){
	return (a<b)?a:b;
}

int minDepth(struct node* root) {
	if(root == NULL){
		return 0;
	}

	if(root->left == NULL && root->right == NULL){
		return 1;
	}

	if(!root->left) // Root left khali ho to
		minDepth(root->right); // Root right me jao

	if(!root->right)
		minDepth(root->left);

	return min(minDepth(root->left), minDepth(root->right)) + 1;
}

int main() {
	struct node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 

    std::cout << "The minimum Depth (i.e; number of nodes between root and closest leaf is: ): " << minDepth(root1) << std::endl;

    return 0;
 	
}