class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        vector<int> last_pos(30, -1);
        
        for (int i = n - 1; i >= 0; --i) {
            for (int bit = 0; bit < 30; ++bit) {
                if ((nums[i] >> bit) & 1) {
                    last_pos[bit] = i;
                }
            }
            
            int max_pos = i;
            for (int bit = 0; bit < 30; ++bit) {
                if (last_pos[bit] > max_pos) {
                    max_pos = last_pos[bit];
                }
            }
            result[i] = max_pos - i + 1;
        }
        
        return result;
    }
};