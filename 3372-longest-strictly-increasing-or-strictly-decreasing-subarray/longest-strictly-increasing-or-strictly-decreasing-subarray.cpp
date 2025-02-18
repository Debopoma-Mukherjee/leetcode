class Solution {
public:
   int longestMonotonicSubarray(vector<int>& nums) 
    {
        int n=nums.size();
        int maxm=1,inclength=1,declength=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                inclength++;
                declength=1;
            }  
            else if(nums[i]<nums[i-1])
            {
                declength++;
                inclength=1;
            }
            else
            {
                inclength=1;
                declength=1;
            }
            maxm=max({maxm,inclength,declength});
        }
        
        return maxm;
    }


};