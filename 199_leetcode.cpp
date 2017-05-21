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
    
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int lheight = height(root->left);
        int rheight = height(root->right);
        return (lheight>rheight)?lheight+1:rheight+1;
    }

    void getLevelNodes(TreeNode* root, int level){

        if(root == NULL){
            return;
        }
        if(level == 1){
            elements.push_back(root->val);
        }else if(level > 1){
            getLevelNodes(root->left, level-1);
            getLevelNodes(root->right, level-1);
        }
    }
 
 
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;
        int hei = height(root);
        for(int i = 1; i <= hei; i++){
            getLevelNodes(root, i);
            answer.push_back(elements[elements.size()-1]);
        }
        return answer;
    }
};
