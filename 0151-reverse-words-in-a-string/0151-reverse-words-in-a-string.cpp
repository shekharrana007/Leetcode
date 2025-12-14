class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>words;
        string word;
        
        while(ss >> word){
            words.push_back(word);
        }
        int l=0;
        int r=words.size()-1;
        while(l<r){
            swap(words[l],words[r]);
            l++;
            r--;
        }
        string res;
        for(int i=0;i<words.size();i++){
            res+=words[i];
            if(i !=words.size()-1){
                res+=" ";
            }
        }
        return res;
    }
};