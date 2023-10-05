/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int* ans = malloc(sizeof(int)*101);
    *returnSize = 0;
    preorder(root, ans, returnSize);
    return ans;
}

void preorder(struct TreeNode* root, int *ans, int *returnSize){
    if(!root){
        return;
    }
    ans[(*returnSize)]=root->val;
    (*returnSize)++;
    preorder(root->left,ans,returnSize);
    preorder(root->right,ans,returnSize);
    return;
}
