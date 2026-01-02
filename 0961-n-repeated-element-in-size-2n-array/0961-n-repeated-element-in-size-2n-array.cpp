class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int s:nums){
            freq[s]++;
        }
        int a=nums[0];
        int b=0;
        for(auto it:freq){
            if(it.second>b){
                b=it.second;
                a=it.first;
            }
        }
        return a;
    }
};