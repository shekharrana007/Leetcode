class Solution {
public:
    string makeFancyString(string s) {
        string res="";
        int n=s.size();
        int count=1;
        for(int i=0;i<n;i++){
           if(i > 0 && s[i] == s[i - 1]) {
                count++;
            }
            else{
                count=1;
            }
            if(count<3){
                res +=s[i];
            }
        }
        
        return res;
    }
};