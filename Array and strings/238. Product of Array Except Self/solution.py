class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        left = 1
        right = 1
        arr = [1] * len(nums)

        for i in range(len(nums)):
            arr[i] = left
            left *= nums[i]
        
        for i in range(len(nums)-1, -1, -1):
            arr[i] *= right
            right *= nums[i]

        return arr        