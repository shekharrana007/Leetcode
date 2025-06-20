class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        //     sort(nums.begin(),nums.end());
        // int res;
        // for(int i=0;i<n-1;i+=2){
        //     if(nums[i]!=nums[i+1]){
            
        //         return nums[i];
        //     }
        // }
        // return nums[n-1];



        
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }}
                if(count==1){
                    return nums[i];
                }
        }
        return -1;
    }

};