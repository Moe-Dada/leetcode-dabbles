class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> answer(n,1);

        for (int i = 1; i < nums.size(); i++){

            answer[i] = answer[i-1] * nums[i-1];
        }
        int right = 1;
        for (int j = nums.size() - 1; j >= 0; j--){

            answer[j] *= right;
            right *= nums[j];

        }

        return answer;

        
    }
};
