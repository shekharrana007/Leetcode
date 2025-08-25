class Solution {
public:
    string reverseWords(string s) {
        int i=s.size()-1;
        string res,word;
       while(i>=0){
        while(i>=0 && s[i]==' ')i--;
        if(i<0)break;
        word.clear();
        while(i>=0 && s[i]!=' '){
            word=s[i]+word;
            i--;
        }
        if(!res.empty())res+=' ';
        res+=word;
       }
       return res;
    }
};