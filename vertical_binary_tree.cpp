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

void findMinMax(struct node *nd, int *max, int *min, int hd){
	if(nd == NULL)
		return;

	if(hd < *min)
		*min = hd;
	else if(hd > *max)
		*max = hd;
	findMinMax(nd->left, max, min, hd-1);
	findMinMax(nd->right, max, min, hd+1);
}

void printVerticalLine(struct node *nd, int hd, int line_number){
	if(nd == NULL)
		return;

	if(hd == line_number)
		std::cout << nd->key << " ";
	
	printVerticalLine(nd->left, hd-1, line_number);
	printVerticalLine(nd->right, hd+1, line_number);

}

void reversePrintVerticalLine(struct node *nd, int hd, int line_number){
	if(nd == NULL)
		return;

	printVerticalLine(nd->left, hd-1, line_number);
	printVerticalLine(nd->right, hd+1, line_number);

	if(hd == line_number)
		std::cout << nd->key << " ";
}

void verticalOrder(struct node *root){
	int min = 0, max = 0;
	findMinMax(root, &max, &min, 0);

	for(int line_no = min; line_no <= max;  line_no++){
		printVerticalLine(root, 0, line_no);
		std::cout << std::endl;
	}
}

int main() {
	struct node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 

    verticalOrder(root1);

    return 0;
 	
}