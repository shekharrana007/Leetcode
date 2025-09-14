class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())return "";
        int n=strs.size();
        for(int i=0;i<strs[0].size();i++){
            char c=strs[0][i];
            for( int j=1;j<n;j++){
                if(i>=strs[j].size() || strs[j][i]!=c){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};