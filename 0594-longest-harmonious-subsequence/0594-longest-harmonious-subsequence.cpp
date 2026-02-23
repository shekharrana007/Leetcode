class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxi=0;
        for(auto i:mp){
            int k=i.first;
            if(mp.count(k+1)){
                maxi=max(maxi,i.second+mp[k+1]);
            }
        }
        return maxi;
    }
};