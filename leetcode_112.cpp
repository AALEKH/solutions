//Question: Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

// PS: This solution solves 102/114 test cases

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
    bool preorder(TreeNode* root, int sum, int value) {
        if(!root) return (value == sum);
        value = value + root->val;
        bool leftEval = preorder(root->left, sum, value);
        bool rightEval = preorder(root->right, sum, value);
        
        return (leftEval || rightEval);
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        // if(!root->left && root->right) return !(sum == root->val);
        // if(!root->right && root->left) return !(sum == root->val);
        // if(!root->right && !root->left) return (sum == root->val);
        return preorder(root, sum, 0);
    }
};
