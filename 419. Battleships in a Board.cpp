https://leetcode.com/problems/battleships-in-a-board/
/**************
题目的大意不知道理解正确没有
其中涉及容器等概念，没有学过，自学了一下不是很清楚

解题分析：
      题目是为了 分析战舰的数量，战舰有长有短，不会重叠
    解决方案是，数一下所有满足下列条件的元素个数
          1，左边没有空
          2，上边没有空
********************/

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int m = board.size();
        if (m==0) return 0;
        int n = board[0].size();
        
        int count=0;
        
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (board[i][j] == '.') continue;  // continue 是停止最近的一次循环，继续下一次循环
                if (i > 0 && board[i-1][j] == 'X') continue;//break 是终止最近的一次循环，直接执行for外面的语句
                if (j > 0 && board[i][j-1] == 'X') continue;// &&  表示 与，当两边的式子都成立时，就成立
                count++;
            }
        }
        
        return count;
    }
};
