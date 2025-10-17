
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