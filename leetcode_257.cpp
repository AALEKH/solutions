//Given a binary tree, return all root-to-leaf paths.



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

    vector<string> elements;
    
    void preorder(TreeNode* root, string element) {
        if(!root) {
            elements.push_back(element.erase(0, 2));   
        } else{
            element = "->" + to_string(root->val);
            preorder(root->left, element);
            preorder(root->right, element);   
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        preorder(root, "");
        return elements;
    }
};
