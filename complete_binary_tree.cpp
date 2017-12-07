// Using i->2i+1, 2i+2 logic
// Facing segmentation fault in this solution

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

int inorder(node* nod, int i, std::vector<bool> &items) {
	if(nod == NULL){
		return 0;
	}

    inorder(nod->left, 2*i+1, items);
    items[i] = true;
    // std::cout << nod->key << " ";
    inorder(nod->right, 2*i+2, items);
    return 0;
	// return max(height(nod->left), height(nod->right)) + 1;
}

int main() {
	struct node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 
    std::vector<bool> elements;
    inorder(root1, 0, elements);
    for(int i = 0; i < elements.size(); i++)
        if(elements[i] == false) std::cout << "not a complete binary tree" << std::endl;

    return 0;
 	
}