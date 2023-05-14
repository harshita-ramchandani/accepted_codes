// https://leetcode.com/problems/3sum/

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        l2=[]
        for i in range(0,len(nums)):
            if(i>0  and nums[i]==nums[i-1]):
                continue
            target=nums[i]*-1
            s=i+1
            e=len(nums)-1
            while s<e:
                if(nums[s]+nums[e]==target):
                    l2.append([nums[i],nums[s],nums[e]])
                    s=s+1
                    while s<e and nums[s]==nums[s-1]:
                        s=s+1
                elif nums[s]+nums[e]<target:
                    s=s+1
                else:
                    e=e-1
        return l2
