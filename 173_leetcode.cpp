/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    TreeNode* node;
    
    BSTIterator(TreeNode *root) {
        node = root;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(node != NULL) return (node->left == NULL)?false:true;
        return false;
    }

    /** @return the next smallest number */
    int next() {
        if(node != NULL){
            int val = node->val;
            node = node->left;
            return (node->val != NULL)?node->val:val;   
        }
        return 0;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
