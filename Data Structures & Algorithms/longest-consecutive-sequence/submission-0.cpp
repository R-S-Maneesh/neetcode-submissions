class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int max_streak = 1;
        int current_streak = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                continue;
            }
            if (nums[i + 1] - nums[i] == 1) {
                current_streak++;
            } else {
                current_streak = 1;
            }
            max_streak = max(max_streak, current_streak);
        }
        return max_streak;
    }
};