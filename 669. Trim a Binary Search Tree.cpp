*/
If the root value in the range [L, R]
      we need return the root, but trim its left and right subtree;       // 二叉搜索树的特点是，小的值在左边，大的值在右边
else if the root value < L
      because of binary search tree property, the root and the left subtree are not in range;
      we need return trimmed right subtree.
else
      similarly we need return trimmed left subtree.
      
   */
   
   class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == NULL) return NULL;                                    //第一类，空树，直接返回空指针
        if (root->val < L) return trimBST(root->right, L, R);             //第二类，根的值小于，输入的最小值
        if (root->val > R) return trimBST(root->left, L, R);              //第三类，根的值大于，输入的最大值
        root->left = trimBST(root->left, L, R);                       //第四类，刚好跟的值在给定范围，左值，右值迭代
        root->right = trimBST(root->right, L, R);
        return root;
    }
};

