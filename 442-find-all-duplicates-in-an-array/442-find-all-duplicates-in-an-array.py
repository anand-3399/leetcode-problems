class Solution(object):
    def findDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = []
        for i in range(len(nums)):
            index = abs(nums[i])-1
            if nums[index]<0:
                ans.append(index+1)
            else:
                nums[index]*=-1
        return ans
        