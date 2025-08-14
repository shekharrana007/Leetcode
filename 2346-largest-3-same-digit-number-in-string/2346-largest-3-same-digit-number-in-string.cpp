class Solution {
public:
    string largestGoodInteger(string num) {
        string maxGoodInteger = ""; 
        int n = num.length();
   
        for (int i = 0; i <= n - 3; i++) {
             
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                string goodInteger = num.substr(i, 3);  
                 if (goodInteger > maxGoodInteger) {
                    maxGoodInteger = goodInteger;
                }
            }
        }
        
        return maxGoodInteger;  
    }
};
