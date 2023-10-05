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
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int* ans=(int*)malloc(sizeof(int)*101);
    *returnSize = 0;
    inorder(root, ans, returnSize);
    return ans;
}

void inorder(struct TreeNode* root, int*ans, int* returnSize){
    if(root==NULL){
        return;
    }
    inorder(root->left, ans, returnSize);
    ans[*returnSize]=root->val;
    (*returnSize)++;
    inorder(root->right, ans, returnSize);
}