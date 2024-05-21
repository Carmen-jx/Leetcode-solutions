class Solution(object):
    def findDifference(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[List[int]]
        """
        #turn the lists into a set to get rid of duplicates
        nums1 = set(nums1) 
        nums2= set(nums2)
        results = []

        #search for values not respective list then append the values to the result
        results.append([value for value in nums1 if value not in nums2])
        results.append([value for value in nums2 if value not in nums1])
                    
        return results