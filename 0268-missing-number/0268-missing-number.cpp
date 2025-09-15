class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
       
        // int count=0;
        // for(int i=0;i<n;i++){
        //         if(nums[i]==count){
        //             count++;
        //         }else{
        //             return count;
        //         }
        // }
        // return n;
    //      int n=nums.size();
    //    int a=1;
    //    for(int i=0;i<n;i++){
    //     if(nums[i]==a){
    //         continue;
    //     }
    //     a++;
    //    } 
    //    return a;
    int n=nums.size();
    int sum=n*(n+1)/2;
    int s=0;
    for(int i=0;i<n;i++){
        s+=nums[i];
    }
    int m=sum-s;
    return m;
    }
};