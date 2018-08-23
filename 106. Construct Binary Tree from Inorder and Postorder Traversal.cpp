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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build_tree(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);
    }
    
    TreeNode* build_tree(vector<int>& inorder, int iLeft, int iRight, vector<int>& postorder, int pLeft, int pRight){
        if(iLeft > iRight || pLeft > pRight) return NULL;
        int mid; // the position of root in "inorder" array
        for(mid = iLeft; mid <= iRight; mid++){
            if(postorder[pRight] == inorder[mid]) break;
        }
        TreeNode* root = new TreeNode(inorder[mid]);
        root->left = build_tree(inorder, iLeft, mid - 1, postorder, pLeft, pLeft + (mid - iLeft - 1));
        root->right = build_tree(inorder, mid+1, iRight, postorder, pLeft + (mid-iLeft), pRight - 1);
        return root;
    }
};