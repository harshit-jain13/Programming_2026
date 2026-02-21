// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:
// Input: nums = [1,2,3,1]
// Output: true
// Explanation:
// The element 1 occurs at the indices 0 and 3.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size()==1) return false;
        unordered_map<int, int> count;
        for(int i=0;i<nums.size();i++)
        {
            if (count.find(nums[i]) == count.end())
            {
                count[nums[i]] = 0;
            }

            count[nums[i]]++;
        }

        for (auto c : count)
        {
            if(c.second >= 2)
            {
                return true;
            }
        }
        return false;
    }
};