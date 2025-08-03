class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        vector<int> pos(n), amount(n);
        for (int i = 0; i < n; ++i) {
            pos[i] = fruits[i][0];
            amount[i] = fruits[i][1];
        }

        int maxFruits = 0, total = 0;
        int i = 0;

        for (int j = 0; j < n; ++j) {
            total += amount[j];

            while (i <= j && !canReach(pos[i], pos[j], startPos, k)) {
                total -= amount[i];
                ++i;
            }

            maxFruits = max(maxFruits, total);
        }

        return maxFruits;
    }

    bool canReach(int left, int right, int startPos, int k) {
        int toLeftFirst = abs(startPos - left) + (right - left);
        int toRightFirst = abs(startPos - right) + (right - left);
        return min(toLeftFirst, toRightFirst) <= k;
    }
};
