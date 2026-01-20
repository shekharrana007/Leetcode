class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxi=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                count++;
            }
            else if(nums[i]>0){
                maxi++;
            }
        }
        return max(count,maxi);
    }
};