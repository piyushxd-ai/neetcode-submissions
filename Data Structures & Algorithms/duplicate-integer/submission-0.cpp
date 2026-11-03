
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int i = 0;

        while (i < nums.size()) {
            mpp[nums[i]]++;

            if (mpp[nums[i]] == 2)
                return true;

            i++;
        }

        return false;
    }
};
