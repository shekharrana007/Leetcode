class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
       
        int count=0;
        for(int i=0;i<n;i++){
                if(nums[i]==count){
                    count++;
                }else{
                    return count;
                }
        }
        return n;
    }
};