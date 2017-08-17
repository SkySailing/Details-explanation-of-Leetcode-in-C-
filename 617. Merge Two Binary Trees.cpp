/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL && t2==NULL )  return NULL;             //先对有空的节点进行讨论
        if(t1!=NULL && t2==NULL)  return t1;
        if(t1==NULL && t2!=NULL)  return t2;
        t1->val+=t2->val;                          //都有值，加起来
        t1->left=mergeTrees(t1->left,t2->left);         //   左边的，再用合并函数
        t1->right=mergeTrees(t1->right,t2->right);         //右边的也用合并函数
        return t1;
             
    }
};
