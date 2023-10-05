//层序迭代遍历实现
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
    int maxDepth(TreeNode* root) {
        int depth=0;
        queue<TreeNode*>que;
        if(root)que.push(root);
        while(!que.empty()){
            depth++;
            int size=que.size();
            for(int i=0;i<size;i++){
                struct TreeNode* node=que.front();
                que.pop();
                if(node->left)que.push(node->left);
                if(node->right)que.push(node->right);
            }
        }
        return depth;
    }
};