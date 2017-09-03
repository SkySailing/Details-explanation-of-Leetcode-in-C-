class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;       
        unordered_map<int, int> m;   // 定义map，键 值都 int型
        for (int n : nums) {   //元素类型t 元素变量x : 遍历对象obj)  //for (int i =0; i <= nums.length; i++) {}
            
            while (s.size() && s.top() < n) {   //第一个数不用比较，直接是到了s.push(n);
                m[s.top()] = n;            // 在map中寻找键 为s.top的元素，如果没有，则插入一个新的键值对《s.top,n》
                s.pop();
            }
            s.push(n);    // 把数字n放到堆栈的开头
        }                 //上面的公式是为了匹配出每个数组的对应的最大值          
        vector<int> ans;
        for (int n : findNums)  ans.push_back(m.count(n) ? m[n] : -1);   //m.count表示m中n键出现的次数，返回值只能是0和1
        return ans;                       //在ans的最后一个向量后插入一个元素，其值为()
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
