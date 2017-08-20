class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;    //定义向量
        for(auto str :words)   //auto：用来声明自动变量。默认为auto存储类型。//auto c ：str，就是取所有str中的元素。
        {
            bool r1=str.find_first_of(" QWERTYUIOPqwertyuiop")== string::npos?false:true;//npos 是一个常数，用来表示不存在的位置no match 
            bool r2=str.find_first_of("ASDFGHJKLasdfghjkl")==string::npos?false:true;// 词组没有匹配就返回0
            bool r3=str.find_first_of("ZXCVBNMzxcvbnm")==string::npos?false:true;//词组有匹配就返回1
            
            if(r1+r2+r3==1)            //判断是其他行的字母
                res.push_back(str);   //c.push_back(X) 将元素X加入到c容器的最后一位。把符合要求的string放到返回的vector中

                                       //c.back() 返回c容器的最后一个元素的值，并不是该元素的地址。
        
        }
        return res;
    }
};
