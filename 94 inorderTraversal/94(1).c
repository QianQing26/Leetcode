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
    *returnSize=0;
    int* res = (int*)malloc(sizeof(int)*501);
    struct TreeNode* stk[501];
    int stk_top=0;
    while(root!=NULL||stk_top>0){
        while(root!=NULL){
            stk[stk_top++]=root;
            root=root->left;
        }
        root=stk[--stk_top];
        res[(*returnSize)++]=root->val;
        root=root->right;
    }
    return res;
}