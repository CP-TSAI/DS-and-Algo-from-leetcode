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
    TreeNode* bstToGst(TreeNode* root) {
        int pre = 0;
        help(root, pre);
        return root;
    }
    void help(TreeNode* root, int& pre) {
        if (root == NULL) return;
        help(root->right, pre);
        pre = pre + root->val;
        root->val = pre;
        help(root->left, pre);
    }
};