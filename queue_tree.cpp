#include <iostream>
#include <queue>

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

void printQueueOrder(struct node *root) {
	if(root == NULL)
		return;
	std::cout << root->key << std::endl;
	std::queue<node *> q1, q2;
	q1.push(root->left);
	q2.push(root->right);
	while(!q1.empty() || !q2.empty()) {
		struct node *nd = q1.front();
		q1.pop();

		std::cout << nd->key << " ";
		if(nd->left){
			q1.push(nd->left);
		} 
		if(nd->right){
			q1.push(nd->right);
		}

		struct node *nd2 = q2.front();
		q2.pop();

		std::cout << nd2->key << " ";
		if(nd2->right) {
			q2.push(nd2->right);
		}
		if(nd2->left) {
			q2.push(nd2->left);
		}
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
    printQueueOrder(root);
    return 0;
}
