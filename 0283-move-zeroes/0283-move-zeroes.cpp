class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int d=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[d++]=nums[i];    
            }
           
        }
        while(d<n){
            nums[d++]=0;
        }
        
    }
};