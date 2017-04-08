// Question: Given a binary tree, find its minimum depth.

// PS: One of the major mistake I commited was to forget that leaf is the node with no right AND left child nodes

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

    int minDepth(TreeNode* root) {
       if(!root) return 0;
       if(!root->left) return 1+minDepth(root->right);
       if(!root->right) return 1+minDepth(root->left);
    //   int rheight = minDepth(root->right);
    //   int lheight = minDepth(root->left);
       
    //   if(lheight < rheight) {
    //       return lheight + 1;
    //   } else {
    //       return rheight + 1;
    //   }
      return 1+min(minDepth(root->left), minDepth(root->right));
    }
};
