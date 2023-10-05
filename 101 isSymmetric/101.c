/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSymmetric(struct TreeNode* root){
    if(root==NULL)return true;
    struct TreeNode* stk[10001];
    int top=-1;
    stk[++top]=root->left;
    stk[++top]=root->right;
    while(top>-1){
        struct TreeNode* leftNode=stk[top--];
        struct TreeNode* rightNode=stk[top--];
        if(!leftNode&&!rightNode){
            continue;
        }
        if(!leftNode||!rightNode||leftNode->val!=rightNode->val){
            return false;
        }
        stk[++top]=leftNode->left;
        stk[++top]=rightNode->right;
        stk[++top]=leftNode->right;
        stk[++top]=rightNode->left;
    }
    return true;
}