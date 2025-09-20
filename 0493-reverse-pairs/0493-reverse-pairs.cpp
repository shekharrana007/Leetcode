class Solution {
public:

    int reversePairs(vector<int>& nums) {
return mergeSort(nums,0,nums.size()-1);
 }
    
    private:
    int mergeSort(vector<int>& nums,int left ,int right){
        if(left>=right)return 0;
        int mid=left+(right-left)/2;
        int count=0;
        count+=mergeSort(nums,left,mid);
        count+=mergeSort(nums,mid+1,right);
        count+=countCrossPairs(nums,left,mid,right);
        merge(nums,left,mid,right);
        return count;
    }
    int countCrossPairs(vector<int>&nums,int left, int mid, int right){
        int count=0;
        int j=mid+1;
        for(int i=left;i<=mid;i++){
            while(j<=right &&(long long)nums[i]>2LL * nums[j]){
                j++;
            }
            count+=(j-(mid+1));
        }
        return count;
    }
    void merge(vector<int>&nums,int left ,int mid, int right){
        vector<int>temp;
        int i=left;
        int j=mid+1;
        while(i<=mid && j<=right){
            if(nums[i]<=nums[j])temp.push_back(nums[i++]);
            else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid)temp.push_back(nums[i++]);
        while(j<=right)temp.push_back(nums[j++]);
        for(int k=0;k<temp.size();k++){
            nums[left+k]=temp[k];
        }
    }
};