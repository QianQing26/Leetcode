/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root){
    return getDepth(root);
}

int getDepth(struct TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int ld=getDepth(root->left);
    int rd=getDepth(root->right);
    return 1+(ld>rd?ld:rd);
}