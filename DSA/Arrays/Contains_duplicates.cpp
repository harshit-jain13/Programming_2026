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