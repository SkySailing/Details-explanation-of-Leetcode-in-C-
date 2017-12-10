//https://leetcode.com/problems/palindromic-substrings/description/
class Solution {
public:             
    int countSubstrings(string s) {
        int num=0,n=s.length();
        for(int i=0;i<n;i++){
            for(int j=0;i-j>=0&&i+j<n&&s[i-j]==s[i+j];j++)  num++;    //对于奇数个字母的情况
            for(int j=0;i-1-j>=0&&i+j<n&&s[i-1-j]==s[i+j];j++)  num++;  //对于偶数个字母的情况
    
            
        }   return num;
        
    }
};
