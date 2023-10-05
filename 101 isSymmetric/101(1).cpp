//迭代方法的队列实现
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
        if(!root)return true;
        queue<TreeNode*>que;
        que.push(root->left);
        que.push(root->right);
        while(!que.empty()){
            TreeNode* leftNode=que.front(); que.pop();
            TreeNode* rightNode=que.front(); que.pop();
            if(!leftNode && !rightNode){
                continue;
            }
            if(!leftNode || !rightNode || leftNode->val!=rightNode->val){
                return false;
            }
            //outside
            que.push(leftNode->left);
            que.push(rightNode->right);
            //inside
            que.push(leftNode->right);
            que.push(rightNode->left);
        }
        return true;
    }
};