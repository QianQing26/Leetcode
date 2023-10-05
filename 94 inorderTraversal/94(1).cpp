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
        vector<int>res;
        if(root==nullptr){
            return res;
        }
        TreeNode* node=root;
        stack<TreeNode*>stk;
        while(!stk.empty()||node!=nullptr){
            while(node!=nullptr){
                stk.push(node);
                node=node->left;
            }
            node=stk.top();
            stk.pop();
            res.push_back(node->val);
            node=node->right;
        }
        return res;
    }
};