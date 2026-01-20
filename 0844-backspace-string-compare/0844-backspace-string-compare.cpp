class Solution {
public:
    string build(string str){
        string s="";
        for(char c:str){
            if(c!='#'){
                s.push_back(c);
            }else if(!s.empty()){
                s.pop_back();
            }
        }
        return s;
    }
    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
    }
};