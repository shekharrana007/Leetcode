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
    vector<int> preorderTraversal(TreeNode* root) {
        //Using recursive call 
        // if(root==nullptr)return {};
        // vector<int>res;
        // res.push_back(root->val);
        // vector<int>left=preorderTraversal(root->left);
        // vector<int>right=preorderTraversal(root->right);
        // res.insert(res.end(),left.begin(),left.end());
        // res.insert(res.end(),right.begin(),right.end());
        // return res;


        //Using Itrative version using stack

        vector<int>res;
        if(root==nullptr)return res;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* curr=st.top();
            st.pop();
            res.push_back(curr->val);
            if(curr->right)st.push(curr->right);
            if(curr->left)st.push(curr->left);

        }
        return res;



    }
};