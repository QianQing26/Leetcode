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
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*>stk;
        if(root)stk.push(root);
        while(!stk.empty()){
            TreeNode* node=stk.top();
            if(node){
                stk.pop();
                if(node->right)stk.push(node->right);
                if(node->left)stk.push(node->left);
                stk.push(node);
                stk.push(NULL);
            }else{
                stk.pop();
                node=stk.top();
                stk.pop();
                swap(node->left,node->right);
            }
        }
        return root;
    }
};