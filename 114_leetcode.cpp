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
    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }
        flatten(root->left);
        flatten(root->right);
        root->left = (struct TreeNode *) malloc( sizeof(struct TreeNode) ); 
        root->left = root->right;
        // return ;
    }
};
