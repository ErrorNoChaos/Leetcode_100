class Solution(object):
    def twoSum(self, nums, target):
        hashe={}
        for i,n in enumerate(nums):
            diff=target-n
            if diff in hashe:
                return [hashe[diff],i]
            else:
                hashe[n]=i
    
        return