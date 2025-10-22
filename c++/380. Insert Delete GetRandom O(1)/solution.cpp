// Difficulty: Medium
// Implement the RandomizedSet class:

// RandomizedSet() Initializes the RandomizedSet object.
// bool insert(int val) Inserts an item val into the set if not present. Returns true if the item was not present, false otherwise.
// bool remove(int val) Removes an item val from the set if present. Returns true if the item was present, false otherwise.
// int getRandom() Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). Each element must have the same probability of being returned.
// You must implement the functions of the class such that each function works in average O(1) time complexity.

class RandomizedSet {
private:
	vector<int> nums;
	unordered_map<int, int> valToIndex;
public:
    RandomizedSet() {
        srand(time(0));
    }
    
    bool insert(int val) {
        if (valToIndex.find(val) != valToIndex.end())
			return (false);
		nums.push_back(val);
		valToIndex[val] = nums.size() - 1;
		return (true);
    }
    
    bool remove(int val) {
        if (valToIndex.find(val) == valToIndex.end())
			return (false);
		int idx = valToIndex[val];
		int lastElement = nums.back();

		nums[idx] = lastElement;
		valToIndex[lastElement] = idx;

		nums.pop_back();
		valToIndex.erase(val);

		return (true);
    }
    
    int getRandom() {
        int rndIdx = rand() % nums.size();
		return (nums[rndIdx]);
    }
};
