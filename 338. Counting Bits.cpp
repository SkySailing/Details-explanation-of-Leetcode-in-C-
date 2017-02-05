338. Counting Bits
https://leetcode.com/problems/counting-bits/
/**************

题目：要求计算bit中1的个数
 
 
 分析：
    使用汉明距离中的 n&n-1 把最低位置1
    
    
********************************/



class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ret(num+1, 0);      //vector<int> a(10,1); //定义了10个整型元素的向量,且给出每个元素的初值为1
        for (int i = 1; i <= num; ++i)
            ret[i] = ret[i&(i-1)] + 1;      //最后一位的1变成0，使用前面已经取得结果，后一个ret前面已经得到了1的个数，再加上最后个被处理掉的1
        return ret;
    }
};






/*********************
总结，关于向量的定义
  
（1） vector<int> a(10); //定义了10个整型元素的向量（尖括号中为元素类型名，它可以是任何合法的数据类型），但没有给出初值，其值是不确定的。
（2）vector<int> a(10,1); //定义了10个整型元素的向量,且给出每个元素的初值为1搜索
（3）vector<int> a(b); //用b向量来创建a向量，整体复制性赋值
（4）vector<int> a(b.begin(),b.begin+3); //定义了a值为b中第0个到第2个（共3个）元素
（5）int b[7]={1,2,3,4,5,9,8};vector<int> a(b,b+7); //从数组中获得初值
*****************/
