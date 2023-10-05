/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    struct TreeNode* tmp;
    struct TreeNode* stk[101];
    int top=-1;
    if(root)stk[++top]=root;
    while(top>-1){
        struct TreeNode* node=stk[top];
        if(node){
            top--;
            if(node->right)stk[++top]=node->right;
            if(node->left)stk[++top]=node->left;
            stk[++top]=node;
            stk[++top]=NULL;
        }else{
            top--;
            node=stk[top];
            top--;
            tmp=node->left;
            node->left=node->right;
            node->right=tmp;
        }
    }
    return root;
}