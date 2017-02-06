412. Fizz Buzz
https://leetcode.com/problems/fizz-buzz/
/*******************************
题目分析：
  1 主要需要解决整除的问题
  2 怎么把整型转换成字符串
  
**************************************/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret_vec(n);
      
      
      for(int i=1; i<=n; ++i)
        {
            if(i%3 == 0)                   //3的倍数
            {
                ret_vec[i-1] += string("Fizz");
            }
            if(i%5 == 0)                          //5的倍数
            {
                ret_vec[i-1] += string("Buzz");  // 字符串是可以后缀的
            }
            if(ret_vec[i-1] == "")
            {
                ret_vec[i-1] += to_string(i); //  to_string 把整型转换成字符串
            }
        }
        return ret_vec;
    }
};
