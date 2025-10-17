// Difficulty: Medium
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
		int n = nums.size();
		if (n == 0)
			return ;
		k = k % n;
		reverse(nums.begin(), nums.end());
		reverse(nums.begin(), nums.begin() + k);
		reverse(nums.begin() + k, nums.end());
    }
};