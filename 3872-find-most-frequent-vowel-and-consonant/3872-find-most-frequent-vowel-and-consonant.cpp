class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>ch;
        for(char c:s){
            ch[c]++;
        }
        string v="aeiou";
        int maxiv=0;
        int maxic=0;
    for(auto &p:ch){
        char st=p.first;
        int count=p.second;
        if(v.find(st)!=string :: npos){
            maxiv=max(maxiv,count);
        }
        else{
            maxic=max(maxic,count);
        }
    }
    return maxiv + maxic;
    }
};