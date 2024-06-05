class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        cnt =0
        prev1= float('inf')
        prev2= float('inf')
        

        for num in nums:
            if num <= prev1:
                prev1 = num
    
            elif num <= prev2:
                prev2 = num
            else:
                return True 
            
        
        return False
        