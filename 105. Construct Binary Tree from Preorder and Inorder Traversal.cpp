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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build_tree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1);
    }
    
    TreeNode* build_tree(vector<int>& preorder, int pLeft, int pRight, vector<int>& inorder, int iLeft, int iRight){
        if(pLeft > pRight || iLeft > iRight) return NULL;
        int mid; // the position of the root in inorder array
        for(mid = iLeft; mid <= iRight; mid++){
            if(inorder[mid] == preorder[pLeft]) break;
        }
        TreeNode* root = new TreeNode(inorder[mid]);
        root->left = build_tree(preorder, pLeft + 1, pLeft + (mid - iLeft), inorder, iLeft, mid-1);
        root->right = build_tree(preorder, pLeft + (mid - iLeft + 1), pRight, inorder, mid+1, iRight);
        return root;
    }
};