class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            string a=s.substr(i,10);
            if(mp.find(a)!=mp.end()){
                    mp[a]++;
            }
            else{
            mp[a]=1;
            }
        }
       vector<string>ans;
       for(auto const& d:mp){
       if(d.second>1){
        ans.push_back(d.first);

       }
       }
       return ans;
    }
};