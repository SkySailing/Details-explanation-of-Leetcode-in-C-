class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());    // 向量的排序方法，默认升序的排列方法
        int result=0;
        for(int i=0;i<nums.size();i+=2){
            result+=nums[i];               //加每组中最小的那个
    
        }
         return result;
        
    }
};

/*
这种方法的证明：http://blog.csdn.net/whl_program/article/details/70667333

图片证明： https://discuss.leetcode.com/topic/87206/java-solution-sorting-and-rough-proof-of-algorithm


    假设对于每一对i，bi >= ai。
    定义Sm = min（a1，b1）+ min（a2，b2）+ … + min（an，bn）。最大的Sm是这个问题的答案。由于bi >= ai，Sm = a1 + a2 + … + an。
    定义Sa = a1 + b1 + a2 + b2 + … + an + bn。对于给定的输入，Sa是常数。
    定义di = | ai - bi |。由于bi >= ai，di = bi-ai, bi = ai+di。
    定义Sd = d1 + d2 + … + dn。
    所以Sa = a1 + (a1 + d1) + a2 + (a2 + d2) + … + an + (an + di) = 2Sm + Sd , 所以Sm =（Sa-Sd）/ 2。为得到最大Sm，给定Sa为常数，需要使Sd尽可能小。
    所以这个问题就是在数组中找到使di（ai和bi之间的距离）的和尽可能小的对。显然，相邻元素的这些距离之和是最小的。

*/
