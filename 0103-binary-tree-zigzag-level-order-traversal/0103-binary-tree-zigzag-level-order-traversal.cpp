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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr)return res;
        queue<TreeNode*>q;
        q.push(root);
           bool leftToRight = true;
        while(!q.empty() ){
            int n=q.size();
            vector<int>level(n);
            for(int i=0;i<n;++i){
                TreeNode* curr=q.front();
                q.pop();
                int index=leftToRight?i:(n-i-1);
                level[index]=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);

            }
            res.push_back(level);
            leftToRight=!leftToRight;
        }
        return res;
    
    }
};