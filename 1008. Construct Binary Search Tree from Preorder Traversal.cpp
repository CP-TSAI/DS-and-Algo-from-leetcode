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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx = 0;
        TreeNode* res = dfs(preorder, idx, INT_MAX);
        return res;
    }
    TreeNode* dfs(vector<int>& preorder, int& idx, int bound) {
        if (idx == preorder.size() || preorder[idx] > bound) return NULL;
        TreeNode* root = new TreeNode(preorder[idx]);
        idx++;
        root->left = dfs(preorder, idx, root->val);
        root->right = dfs(preorder, idx, bound);
        return root;
    }
};