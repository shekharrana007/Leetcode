class Solution {
public:
    bool isPalindrome(string s) {
        // string ss="";
        // for(char c:s){
        //     if(isalnum(c)){
        //         ss+=tolower(c);
        //     }
        // }
        // string r=ss;
        // reverse(r.begin(),r.end());
        // return ss==r;
        int l=0;
        int  r=s.size()-1;
        while(l<r){
            if(!isalnum(s[l])){
                l++;
            }
            else if(!isalnum(s[r])){
                r--;

            }
            else{
                if(tolower(s[l])!=tolower(s[r])){
                    return false;
                }
            
            l++;
            r--;
            }
        }
        return true;
    }
};