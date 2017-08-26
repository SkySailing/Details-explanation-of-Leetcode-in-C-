   vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;    // queue模版也需要定义两个模版参数，一个是元素类型，一个是容器类型，元素类型是必要的，学习什么是元素类型，什么是容器；
        q.push(root);           //入队：如q.push(x):将x元素接到队列的末端；
        while(!q.empty()) {     // 当有内容的时候
            long temp=0;
            int s=q.size();
            for(int i=0;i<s;i++) {      //树的内容，还没学数据结构，要努力呀
                TreeNode* t=q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                temp+=t->val;
            }
            res.push_back((double)temp/s);
        }
        return res;
    }
    /*queue的基本操作有：
1.入队：如q.push(x):将x元素接到队列的末端；
2.出队：如q.pop() 弹出队列的第一个元素，并不会返回元素的值；
3,访问队首元素：如q.front()
4,访问队尾元素，如q.back();
5,访问队中的元素个数，如q.size();
*/
