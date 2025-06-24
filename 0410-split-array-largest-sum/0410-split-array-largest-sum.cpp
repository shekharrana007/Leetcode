class Solution {
public:
bool ispossible(vector<int>& nums, int k,int mid){
    int n=nums.size();
    int s=0;
    int ss=1;
    for(int i=0;i<n;i++){
            if(nums[i]+s<=mid){
                s+=nums[i];
            }
            else{
                ss++;
                if(nums[i]>mid||ss>k){
                    return false;
                }
                s=nums[i];
            }
    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int ans;
        int e=sum;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(nums,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};