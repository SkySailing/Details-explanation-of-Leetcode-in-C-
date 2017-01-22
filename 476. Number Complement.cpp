/*
https://leetcode.com/problems/number-complement/



*/


/********************************************************************************** 
* 
*怎么确定一个数字的位大小？？（去掉前面的零）
* 
* 
           
**********************************************************************************/


/********************************************************************************** 
* 
*主要使用移位操作，使用与操作，结合移位操作，就可以把最左边一开始的位置找出来。
* 
* 
           
**********************************************************************************/
          
           
           class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~0;             //    ~ bitwise NOT（位求反）
        while (num & mask) mask <<= 1;      //     mask=mask<<1 , 左移一位然后赋值给自己
                                            // 目地是为了使mask识别位从哪里开始有效
  
        
        return ~mask & ~num;                      
    }
};

/*
 example,
*                   #       
num          = 00000101
mask         = 11111000
~mask & ~num = 00000010

*/


class Solution {
public:
    int findComplement(int num) {
          unsigned mask = ~0;
        while (num & mask) mask <<= 1;
        
        
        return (~mask)^num;                            // 使用异或一，等于取反
        
        
    }
};
