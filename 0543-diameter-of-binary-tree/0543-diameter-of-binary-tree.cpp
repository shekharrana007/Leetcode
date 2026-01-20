/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  int maxd=0;
    int diameterr(TreeNode* root) {
        if(!root)return 0;
        int l=diameterr(root->left);
        int r=diameterr (root->right);
        
        maxd=max(maxd,l+r);
        return max(l,r)+1;
        
    }
     int diameterOfBinaryTree(TreeNode* root) {
     maxd=0;
     diameterr(root);
     return maxd;
     }
};