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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        vector<TreeNode*> stk;
        for (int i = 0; i < nums.size(); ++i) 
        {
            TreeNode* cur = new TreeNode(nums[i]); 
            while (!stk.empty() && stk.back()->val < nums[i])        // back() 函数返回当前vector最末一个元素的引用。
            { 
                cur->left = stk.back();
                stk.pop_back();
            }
            if (!stk.empty())
                stk.back()->right = cur;
            stk.push_back(cur);   //向vector后面添加元素
        }
        return stk.front();   //std::vector 的 front() 成员函数返回第一个元素的引用。
    }
};

/*
1.vector中push_back函数的意思是在vector的末尾插入一个元素。
2.vector简单理解为动态一维数组push_back作用是在这个一维数组尾部插入一个元素    vector<int> v;
   v.push_back(1); //v里面是： 1
   v.push_back(2); //v里面是： 1 , 2
   v.push_back(3); //v里面是： 1 , 2 , 3。
*/
