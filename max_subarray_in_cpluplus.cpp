class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int cur = nums[0];
        int max_cur = cur;

        for (int i=1; i < nums.size(); i++){
            cur = max(nums[i], cur + nums[i]);
            max_cur = max(max_cur, cur);

                
        }

        return max_cur;
        
    }
};
