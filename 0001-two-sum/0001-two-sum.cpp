class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n=nums.size();
          
        // for(int i=0;i<n;i++){
        //    for(int j=i+1;j<n;j++){
        //     if(nums[i]+nums[j]==target){
        //       return{i,j};
        //     }
        //    } 
        // }
        // return{};
        // unordered_map<int,int>m;
        // for(int c:nums){
        //     m[c]++;
        // }
        //  for(int i=0;i<n;i++){
        //     int s=target-nums[i];
        //     if(m[i]==s){
        //         return {i,m.second()};
        //     }
 

        //  }
        //  return {};

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};