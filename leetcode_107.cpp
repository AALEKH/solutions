// Question: Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

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
    vector<vector<int>> answer;
    
    int height(TreeNode* root) {
        if(!root) return 0;
        int lheight = height(root->left);
        int rheight = height(root->right);
        if(lheight > rheight) {
            return lheight+1;
        } else {
            return rheight+1;
        }
    }
    
    void printGivenLevel(TreeNode* root, int level) {
        if (root == NULL)
            return;
        if (level == 1)
            // printf("%d ", root->data);
            elements.push_back(root->val);
        else if (level > 1)
        {
            printGivenLevel(root->left, level-1);
            printGivenLevel(root->right, level-1);
        }
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        for(int i = height(root); i >= 1; i--) {
            printGivenLevel(root, i);
            answer.push_back(elements);
            elements.clear();
        }
        return answer;
    }
};
