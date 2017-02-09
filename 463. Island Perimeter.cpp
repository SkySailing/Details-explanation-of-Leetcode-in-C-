463. Island Perimeter
https://leetcode.com/problems/island-perimeter/
/***************************************
题目，数一数矩阵中的周长：

用减法的思想：所有的的1个数  乘以4边
           减去  有链接点处  乘以2边                                                                                                                              
*******************************************************/




int islandPerimeter(vector<vector<int>>& grid) {
        int count=0, repeat=0;
        for(int i=0;i<grid.size();i++)                           //行  循环
        {
            for(int j=0; j<grid[i].size();j++)                    //列  循环
                {
                    if(grid[i][j]==1)
                    {
                        count ++;                                               //计算总的1的个数
                        if(i!=0 && grid[i-1][j] == 1)         repeat++;      //计算上方是否有链接
                        if(j!=0 && grid[i][j-1] == 1)         repeat++;      //计算左边方是否有链接
                    }
                }
        }
        return 4*count-repeat*2;         // 减法计算
    }
