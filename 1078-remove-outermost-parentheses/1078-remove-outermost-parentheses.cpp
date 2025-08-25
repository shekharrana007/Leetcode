class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int d=0;
        for(char c:s){
            if(c=='('){
                if(d>0)res+=c;
                d++;
            }
            else{
                d--;
                if(d>0)res+=c;
            }
        }
        return res;
    }
};