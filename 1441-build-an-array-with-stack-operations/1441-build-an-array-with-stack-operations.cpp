class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
     vector<string>s;
     int ind=0;
     for(int i=1;i<=n;i++){
        s.push_back("Push");
        if(ind<target.size() && i==target[ind]){
            ind++;
        }
        else{
            s.push_back("Pop");
        }
        if(ind==target.size()){
            break;
        }

     } 
     return s;  
    }
};