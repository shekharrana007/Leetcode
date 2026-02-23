class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
   
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=double(sum)/k;

        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            avg=max(avg,double(sum)/k);
             

        }
        return avg;
    }
};