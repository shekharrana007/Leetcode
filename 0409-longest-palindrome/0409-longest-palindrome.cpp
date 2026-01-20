class Solution {
public:
    int longestPalindrome(string s) {
        int count[128]={0};
        for(char c:s){
            count[c]++;
        }
        int old=0;
        for(int i=0;i<128;i++){
            if(count[i]%2!=0)old++;
        }
        if(old==0)return s.length();
        return s.length()-old+1;
    }
};