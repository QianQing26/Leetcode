//迭代方法的栈实现
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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        stack<TreeNode*>stk;
        stk.push(root->left);
        stk.push(root->right);
        while(!stk.empty()){
            TreeNode* leftNode=stk.top(); stk.pop();
            TreeNode* rightNode=stk.top(); stk.pop();
            if(!leftNode && !rightNode){
                continue;
            }
            if(!leftNode || !rightNode || leftNode->val!=rightNode->val){
                return false;
            }
            stk.push(leftNode->left);
            stk.push(rightNode->right);
            stk.push(leftNode->right);
            stk.push(rightNode->left);
        }
        return true;
    }
};