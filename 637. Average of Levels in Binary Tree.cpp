  vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;         //定义返回的向量
        queue<TreeNode*> q;     //队列是一种特殊的线性表，是一种先进先出（FIFO）的数据结构
        q.push(root);           //把输入的 树根推到队列里面
        while(!q.empty()) {
            long temp=0;
            int s=q.size();                 //检测当前层级的数量
            for(int i=0;i<s;i++) {
                TreeNode* t=q.front();      //拷贝当前的二叉树
                q.pop();                    //弹出前面元素
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                temp+=t->val;                //把当前的层级加起来
            }
            res.push_back((double)temp/s);       //求平均
        }
        return res;
    }


/*
.queue模版类的定义在<queue>头文件中。
queue与stack模版非常类似，queue模版也需要定义两个模版参数，一个是元素类型，一个是容器类型，元素类型是必要的，容器类型是可选的，默认为dqueue类型。
定义queue对象的示例代码如下：
queue<int>q1;
queue<double>q2;
queue的基本操作有：
1.入队：如q.push(x):将x元素接到队列的末端；
2.出队：如q.pop() 弹出队列的第一个元素，并不会返回元素的值；
3,访问队首元素：如q.front()
4,访问队尾元素，如q.back();
5,访问队中的元素个数，如q.size();

*/
