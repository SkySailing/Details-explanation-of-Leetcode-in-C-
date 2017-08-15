
bool judgeCircle(char* moves) {  
    int len=strlen(moves);  
    int sumhorizontal=0;  
    int sumvertical=0;  
    for(int n=0;n<len;n++)  
    {  
        if(*(moves+n)=='U')  
            sumvertical++;           //标记左右能否相抵消
        if(*(moves+n)=='D')  
            sumvertical--;  
        if(*(moves+n)=='L')  
            sumhorizontal--;  
        if(*(moves+n)=='R')  
            sumhorizontal++;  
    }  
    if(sumhorizontal==0&&sumvertical==0)  
        return true;  
    return false;  
}  

/*
C语言中提供了自增1运算符++和自减1运算符--
而且，这两种运算符，还分为前缀运算和后缀运算
如：
int a=5;
a++;   //后缀运算，表示a=a+1 = 5+1=6
a--;     //后缀运算，表示a=a-1 = 6-1=5
--a;     //前缀运算，表示a=a-1 = 5-1=4
++a;   //前缀运算，表示a=a+1 = 4+1=5
以上单独使用自增1或自减1运算符，前缀运算和后缀运算没有区别，其结果都是完成变量a的自加1或自减1
前缀运算和后缀运算的区别在于：前缀运算，先运算，再使用变量；后缀运算，先使用变量，再运算。如：
int a=5;
printf("a=%d\n", ++a );  //前缀运算，先运算a=a+1=5+1=6，再使用变量a，输出结果a=6
a=5; //重新赋值为5
printf("a=%d\n", a++ );  //后缀运算，先使用变量a，输出结果a=5，再运算a=a+1=5+1=6


*/
