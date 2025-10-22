// Difficulty: Medium
// You are given a 0-indexed array of integers nums of length n. You are initially positioned at index 0.
// Each element nums[i] represents the maximum length of a forward jump from index i.
// In other words, if you are at index i, you can jump to any index (i + j) where:
// 0 <= j <= nums[i] and
// i + j < n
// Return the minimum number of jumps to reach index n - 1. The test cases are generated such that you can reach index n - 1.


class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
		int i = 0;
		int jumps = 0;
		int curMax = 0;
		int curEnd = 0;

		while (i < n - 1)
		{
			if (curMax < i + nums[i])
				curMax = nums[i] + i;
			if (i == curEnd)
			{
				jumps++;
				curEnd = curMax;

				if (curEnd >= n - 1)
					break ;
			}
			i++;
		}
		return (jumps);
    }
};