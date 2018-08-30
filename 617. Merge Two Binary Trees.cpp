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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* res = NULL;
        helper(t1, t2, res);
        return res;
    }
    void helper(TreeNode* t1, TreeNode* t2, TreeNode*& res){
        if(t1 == NULL && t2 == NULL) return;
        else if(t1 != NULL && t2 == NULL){
            res = new TreeNode(t1->val);
            helper(t1->left, NULL, res->left);
            helper(t1->right, NULL, res->right);
        }
        else if(t1 == NULL && t2 != NULL){
            res = new TreeNode(t2->val);
            helper(NULL, t2->left, res->left);
            helper(NULL, t2->right, res->right);
        }
        else{
            res = new TreeNode(t1->val + t2->val);
            helper(t1->left, t2->left, res->left);
            helper(t1->right, t2->right, res->right);
        }
    }
};