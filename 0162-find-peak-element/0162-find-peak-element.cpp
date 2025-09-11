class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //Naive Approach (O(n))
    //    int n=nums.size();
    //    for(int i=0;i<n;i++){
    //     if((i==0 || nums[i]>=nums[i-1]) && (i==n-1 || nums[i]>=nums[i+1])){
    //         return i;
    //     }
    //    }
    //    return -1;


    //Efficient Approach (Binary Search, O(log n))
    int low=0;
    int high=nums.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(nums[mid]<nums[mid+1]){
            low=mid+1;
        }else{
            high=mid;
        }
    }return low;

    }
};