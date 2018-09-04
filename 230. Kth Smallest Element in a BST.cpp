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
    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0;
        stack<TreeNode*> stk;
        TreeNode* p = root;
        while(p != NULL || !stk.empty()){
            while(p != NULL){
                stk.push(p);
                p = p->left;
            }
            TreeNode* tmp = stk.top(); stk.pop();
            cnt++;
            if(cnt == k) return tmp->val;
            p = tmp->right;
        }
    }
};