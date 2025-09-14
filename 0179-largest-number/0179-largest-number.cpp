class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>arr;
        for(int s:nums){
            arr.push_back(to_string(s));
        }
        sort(arr.begin(),arr.end(),[](string &a,string &b){
            return a+b >b+a;
        });
        if(arr[0]=="0"){
            return "0";
        }
        string res="";
        for(string c:arr){
            res+=c;
        }
        return res;
    }
};