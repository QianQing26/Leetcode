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
    int *ans=(int*)malloc(2000*sizeof(int));
    *returnSize=0;
    if(root==NULL){
        return ans;
    }

    struct TreeNode* stk[2000];
    struct TreeNode* node=root;
    int stk_top=0;
    while(stk_top>0 || node!=NULL){
        while(node!=NULL){
            ans[(*returnSize)++]=node->val;
            stk[stk_top++]=node;
            node=node->left;
        }
        node=stk[--stk_top];
        node=node->right;
    }
    return ans;
}