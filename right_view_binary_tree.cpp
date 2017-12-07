#include <iostream>
#include <map>

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

void leftView(struct node * root, int level, std::map<int, int> &map) {
    if(root == NULL){
        return;
    }

    map[level] = root->key;
    leftView(root->left, level+1, map);
    leftView(root->right, level+1, map);
}

int left_view(node* nod) {
    std::map<int, int> mapped;

    leftView(nod, 1, mapped);

    for(auto it: mapped)
        std::cout << it.second << " ";
}

int main() {
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);

    left_view(root);

    return 0;
 	
}