class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=0;
        for(int c:candies){
            maxi=max(maxi,c);
        }
        vector<bool>res;
    for(int c: candies){
        if(c+extraCandies >= maxi){
            res.push_back(true);
        }
        else{
            res.push_back(false);
        }
    }
    return res;
    }
};