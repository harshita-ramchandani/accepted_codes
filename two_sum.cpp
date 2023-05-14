class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l=[]
        for i in range(0,len(nums)):
            x=target-nums[i]
            nums[i]="do not disturb"
            if x in nums:
                if i!=nums.index(x):
                    l.append(i)
                    l.append(nums.index(x))
                    return l
                    
