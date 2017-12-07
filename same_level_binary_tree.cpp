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

void return_Right_Node(struct node *root, int level, int value, int &value_level_, int &set) {
	if(root == NULL)
		return;

	if((value_level_ == level) && set) {
		std::cout << "The next element is: " << root->key;
	}

	if(root->key ==  value){
		value_level_ = level;
		set = true;
	}

	return_Right_Node(root->left, level+1, value, value_level_, set);
	return_Right_Node(root->left, level+1, value, value_level_, set);

}

int main() {
	int value = -1;
	int set_ = false;
	struct node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 
    std::vector<bool> elements;
    return_Right_Node(root1, 0, 2, value, set_);

    return 0;
 	
}