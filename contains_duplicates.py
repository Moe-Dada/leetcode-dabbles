class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        set_n = set(nums)

        if len(set_n) == len(nums):
            return False
        return True
