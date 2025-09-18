class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // int n=intervals.size();
        // sort(begin(intervals),end(intervals));
        // vector<vector<int>>result;
        // result.push_back(intervals[0]);
        // for(int i=1;i<n;i++){
        //     if(intervals[i][0]<=result.back()[1]){
        //         result.back()[1]=max(result.back()[1],intervals[i][1]);
        //     }
        //     else{
        //         result.push_back(intervals[i]);
        //     }
        // }
        // return result;

        //brute force

        // int n=intervals.size();
        // vector<vector<int>>ans;
        // sort(intervals.begin(),intervals.end());
        // for(int i=0;i<n;i++){
        //     int start=intervals[i][0];
        //     int end=intervals[i][1];
        //     if(!ans.empty() && end<=ans.back()[1])continue;
        //     for(int j=i+1;j<n;j++){
        //         if(intervals[j][0]<=end){
        //             end=max(end,intervals[j][1]);
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     ans.push_back({start,end});
        // }
        // return ans;

        //optimal
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
            if(ans.empty()|| intervals[i][0]>ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};