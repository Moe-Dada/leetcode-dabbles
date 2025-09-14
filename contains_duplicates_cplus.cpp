class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numss(nums.begin(), nums.end());
        return numss.size() != nums.size();
    }
};
