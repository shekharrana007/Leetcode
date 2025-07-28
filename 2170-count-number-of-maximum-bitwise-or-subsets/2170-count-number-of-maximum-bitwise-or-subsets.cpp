class Solution {
public:
    int maxOR = 0, count = 0;

    void dfs(vector<int>& nums, int index, int currentOR) {
        if (index == nums.size()) {
            if (currentOR == maxOR) count++;
            return;
        }

        dfs(nums, index + 1, currentOR | nums[index]);

        dfs(nums, index + 1, currentOR);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        for (int num : nums)
            maxOR |= num;

        dfs(nums, 0, 0);

        return count;
    }
};
