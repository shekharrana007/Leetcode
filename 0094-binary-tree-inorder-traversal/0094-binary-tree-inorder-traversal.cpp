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
    vector<int> inorderTraversal(TreeNode* root) {
//      if(root==nullptr)return {};
//      vector<int>res;
//       vector<int>left= inorderTraversal(root->left);
//       vector<int>right= inorderTraversal(root->right);
//       res.insert(res.end(),left.begin(),left.end());
//       res.push_back(root->val);
//       res.insert(res.end(),right.begin(),right.end());
// return res;
//     }


// vector<int>res;
// if(root==nullptr)return res;
// stack<TreeNode*>st;
// TreeNode* curr=root;
// while(curr!=nullptr || !st.empty()){
//    while(curr!=nullptr){
//     st.push(curr);
//     curr=curr->left;
//    }
// curr=st.top();
// st.pop();
// res.push_back(curr->val);
// curr=curr->right;
// }   
// return res;
//     }


vector<int>res;
if(root==nullptr)return res;
stack<TreeNode*>st;
TreeNode* curr=root;
while(curr!=nullptr || !st.empty()){
    while(curr !=nullptr){
        st.push(curr);
        curr=curr->left;
    }
    curr=st.top();
    st.pop();
    res.push_back(curr->val);
    curr=curr->right;
}
return res;
    };



};