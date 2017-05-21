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
    vector<int> elements;
    void inOrderTraversal(TreeNode* root){
        if(root != NULL) {
            inOrderTraversal(root->left);
            elements.push_back(root->val);
            inOrderTraversal(root->right);
        }
    }
    
    int kthSmallest(TreeNode* root, int k) {
        inOrderTraversal(root);
        return elements[k-1];
    }
};
