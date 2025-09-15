class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // int count=1;
        // int maj=nums[0];
        // for(int i=1;i<n;i++){
        //     if(count==0){
        //         maj=nums[i];
        //         count=1;
        //     }
        //     else if(maj==nums[i]){
        //         count++;
        //     }
        //     else{
        //         count--;
        //     }
        // }
        // return maj;

         int n=nums.size();

        map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        for(auto it : m){
            if(it.second >(n/2)){
                return it.first;
            }
        }
        return -1;
    }
};