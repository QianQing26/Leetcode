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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr){
            return ans;
        }
        stack<TreeNode*>stk;
        TreeNode* node=root;
        stk.push(node);
        while(!stk.empty()){
            node = stk.top();
            stk.pop();
            ans.push_back(node->val);
            if(node->left)stk.push(node->left);
            if(node->right)stk.push(node->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};