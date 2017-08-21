class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {   // when i is a non-space
                int j = i;                                       
                for (; j < s.length() && s[j] != ' '; j++) { }      // move j to the next space//判断条件，让j遇到空格就跳出来循环
                reverse(s.begin() + i, s.begin() + j);              //调换顺序的函数reverse(ss.begin(), ss.end());
                i = j - 1;                                          //待会i要先加一，因为for循环。 i经过for两次，到达下次的单词第一个字母
            }                                                       //改成i=j,可以少循环一次。
        }
        
        return s;
    }
};
