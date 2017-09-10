public:
    string dict = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int id = 0;
    unordered_map<string,string> m; //key is longURL, value is shortURL   //
    unordered_map<int, string> idm; //key is id in DB, value is longURL  
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if(m.find(longUrl) != m.end())return m[longUrl];     //找 建longUrl的值，有的话，就返回对应短地址
                         
        string res = "";
        id++;
        int count = id;
        while(count > 0)     
        {
            res = dict[count%62] + res;     //asc中，数字零对应的值为48,串联字符串,不断往后面添加字母。
            count /= 62;                    
        }
        while(res.size() < 6)
        {
            res = "0" + res;         //不够6位时，用0添在后面。
        }
        m[longUrl] = res;
        idm[id] = longUrl;
        return res;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int id = 0;
        for(int i = 0; i < shortUrl.size(); i++)
        {
            id = 62*id + (int)(dict.find(shortUrl[i]));
        }
        if(idm.find(id) != idm.end())return idm[id];
        return "";
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
