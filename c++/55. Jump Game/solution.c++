// Difficulty: Medium
// You are given an integer array nums.
// You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
// Return true if you can reach the last index, or false otherwise.

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
		int jumpreach = 0;

		while (i < nums.size())
		{
			if (i > jumpreach)
				return (false);
			if (nums[i] + i > jumpreach)
				jumpreach = nums[i] + i;
			if (jumpreach >= nums.size())
				return (true);
			i++;
		}
		return (true);
    }
};