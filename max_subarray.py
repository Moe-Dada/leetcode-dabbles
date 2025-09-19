class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        cur = max_cur = nums[0]

        for num in nums[1:]:
            cur = max(num, cur + num)
            max_cur = max(max_cur, cur)

        return max_cur
