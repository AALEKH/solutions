/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isUnival(TreeNode* root,int key){
        if(root == NULL) return true;
        return (root->val ==key && isUnival(root->left, key) && isUnival(root->right, key));
    }

    void countIterations(TreeNode* root, int *counter){
        if(root != NULL){
            if(isUnival(root, root->val)) (*counter)++;
            countIterations(root->right, counter);
            countIterations(root->left, counter);
        }
    }

    int countUnivalSubtrees(TreeNode* root) {
        int counter = 0;
        countIterations(root, &counter);
        return counter;
    }
};
