class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        int ans;
        for(auto a:m){
            if(a.second==1){
                return a.first;
            }
        }
        return -1;
    }
};