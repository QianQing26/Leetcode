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
int* postorderTraversal(struct TreeNode* root, int* returnSize){
    int* ans = malloc(sizeof(int)*101);
    *returnSize = 0;
    postorder(root, ans, returnSize);
    return ans;
}

void postorder(struct TreeNode* root, int *ans,int* returnSize){
    if(root==NULL){
        return;
    }
    postorder(root->left, ans, returnSize);
    postorder(root->right, ans, returnSize);
    ans[*returnSize] = root->val;
    (*returnSize)++;
}