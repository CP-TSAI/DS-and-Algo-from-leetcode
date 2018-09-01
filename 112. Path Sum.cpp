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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL) return false;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                TreeNode* tmp = q.front(); q.pop();
                if(tmp->val == sum && tmp->left == NULL && tmp->right == NULL) return true;
                else{
                    if(tmp->left != NULL){
                        tmp->left->val += tmp->val;
                        q.push(tmp->left);
                    }
                    if(tmp->right != NULL){
                        tmp->right->val += tmp->val;
                        q.push(tmp->right);
                    }
                }
            }
        }
        return false;
        
        
        
        // if(root == NULL) return false;
        // if(root->left == NULL && root->right == NULL)
        //     return root->val == sum ? true : false;
        // return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
    }
};
