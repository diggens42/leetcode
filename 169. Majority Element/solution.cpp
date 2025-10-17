// Difficulty: Easy
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

//Boyer–Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count, candidate = 0;

        for (int num : nums)
        {
            if (count == 0)
                candidate = num;
            count += (num == candidate) ? 1 : -1;
        }
        return (candidate);
    }
};