class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;       
        unordered_map<int, int> m;
        for (int n : nums) {                    //for (int i =0; i <= nums.length; i++) {}
            
            while (s.size() && s.top() < n) {     //第一个数不用比较，直接是到了s.push(n);
                m[s.top()] = n;                     // 这里没有看懂，自学stack和哈希表再回来解释2017.8.26
                s.pop();
            }
            s.push(n);  // 把
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};

/*

解释stack：
stack 类，
STL中的很有用的容器之一，其中元素遵循先进先出原则
包含以下几个成员函数：
empty() 堆栈为空则返回真
pop() 移除栈顶元素（不会返回栈顶元素的值）
push() 在栈顶增加元素
size() 返回栈中元素数目
top() 返回栈顶元素

*/

/*
Input: nums1 = [4,1,2], nums2 = [1,3,4,2].
Output: [-1,3,-1]
*/
