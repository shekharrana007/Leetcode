class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maxi=INT_MIN;
        // int sum=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //    sum +=nums[i];
        //     maxi=max(maxi,sum);
        //     if(sum<0){
        //         sum=0;
        //     }
        // }
        // return maxi;
        int maxi=nums[0];
        int c=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            c=max(nums[i],c+nums[i]);
            maxi=max(maxi,c);
        }
        return maxi;
    }
};