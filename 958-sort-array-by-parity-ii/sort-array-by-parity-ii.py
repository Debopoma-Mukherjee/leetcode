class Solution(object):
    def sortArrayByParityII(self, a):
        i=0
        j=1
        while(i<len(a) and j<len(a)):
            while(i<len(a) and a[i]%2==0):
                i=i+2
            while(j<len(a) and a[j]%2!=0):
                j=j+2
            if(i<len(a) and j<len(a)):
               a[i],a[j]=a[j],a[i]

             
        return a
        