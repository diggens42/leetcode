// Difficulty: Easy
// Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x !=0))
			return false;

		int revToMid;

		while (x < revToMid)
		{
			revToMid = revToMid * 10 + x % 10;
			x /=10;
		}

		return (x == revToMid || x == revToMid / 10);
    }
};