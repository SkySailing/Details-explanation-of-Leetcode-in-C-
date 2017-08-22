class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        size_t kinds = 0;                                        //size_t其实是一种类型，类似于无符号整形（unsignted int）
        sort(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++) {
            kinds += i == 0 || candies[i] != candies[i - 1];     //  ||表示或者 ，kinds=kinds+i==0|| candies[i] != candies[i - 1]
        }
        return min(kinds, candies.size() / 2);// 种类大于半数也 没有用，因为弟弟妹妹要对半分糖果
    }
};
 
 
//优先级 ：  += 14         == 7            || 12          ！= 7 
         /*    kinds += i == 0 || candies[i] != candies[i - 1]; 的解读
            先判断 i==0是吗？     同时 判断candies[i] != candies[i - 1]元素 前后有没有变化
                  第一种情况前后没有变化，  后面也是 0  只有当i=0是会自动计入一个种类糖果
                  第二种情况前后糖果的种类发生了变化， 后面是一，不管i=0，种类就会加一
                  
                  
         
