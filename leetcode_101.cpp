// Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

PS: Given Solution  solved 191/193 test cases


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

    vector<int> vec1;
    vector<int> vec2;
    
    void inorderRight(TreeNode* root) {
        if(root) {
            inorderRight(root->right);
            vec1.push_back(root->val);
            inorderRight(root->left);   
        }
    }
    
    void inorderLeft(TreeNode* root) {
        if(root) {
            inorderLeft(root->left);
            vec2.push_back(root->val);
            inorderLeft(root->right);   
        }
    }
    
    bool isSymmetric(TreeNode* root) {
       if(root){
           inorderRight(root->right);
           inorderLeft(root->left);
           if(vec1.size() != vec2.size()) return false;
           for(int i = 0; i < vec1.size(); i++ ) {
               if(vec1[i] != vec2[i]) return false;
           }   
       }
       return true;
    }
};
