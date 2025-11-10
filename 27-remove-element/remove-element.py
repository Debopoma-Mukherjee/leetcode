class Solution(object):
    def removeElement(self, nums, val):
        i=0
        j=len(nums)-1
        while(i<=j):
            while(i<=j and nums[j]==val):
              j=j-1
            while(i<=j and nums[i]!=val):
              i=i+1
            if(i<=j):
                nums[i],nums[j]=nums[j],nums[i]
        return i
