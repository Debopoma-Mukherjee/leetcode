class Solution(object):
    def mergeArrays(self, nums1, nums2):
        result=[]
        i=0
        j=0
        while(i<len(nums1) and j<len(nums2)):
            if(nums1[i][0]==nums2[j][0]):
                result.append([nums1[i][0],nums1[i][1]+nums2[j][1]])
                i=i+1
                j=j+1
            elif(nums1[i][0]<nums2[j][0]):
                result.append([nums1[i][0],nums1[i][1]]) 
                i=i+1   
            else:        
                result.append([nums2[j][0],nums2[j][1]]) 
                j=j+1 
        if(j<len(nums2)):
            while(j<len(nums2)):
                result.append([nums2[j][0],nums2[j][1]]) 
                j=j+1 
        else:
           while(i<len(nums1)):
                result.append([nums1[i][0],nums1[i][1]]) 
                i=i+1  
        return result