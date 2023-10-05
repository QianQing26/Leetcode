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

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    int* res = malloc(sizeof(int)*102);
    *returnSize = 0;
    struct TreeNode* stk[102];
    int stk_top=0;
    struct TreeNode* node=root;
    while(stk_top>0||node){
        while(node){
            res[(*returnSize)++]=node->val;
            stk[stk_top++]=node;
            node=node->right;
        }
        node=stk[--stk_top];
        node=node->left;
    }
    int* ans = (int*)malloc(sizeof(int)*102);
    for(int i=0;i<*returnSize;i++){
        ans[i] = res[(*returnSize)-i-1];
    }
    free(res);
    return ans;
}