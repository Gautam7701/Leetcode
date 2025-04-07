class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        // If sum is odd, we can't partition into two equal subsets
        if (totalSum % 2 != 0) return false;

        int target = totalSum / 2;
        int n = nums.size();

        // dp[i] means: is it possible to get sum = i
        vector<bool> dp(target + 1, false);
        dp[0] = true;  // 0 sum is always possible (with empty subset)

        for (int num : nums) {
            for (int i = target; i >= num; --i) {
                dp[i] = dp[i] || dp[i - num];
            }
        }

        return dp[target];
    }
};
