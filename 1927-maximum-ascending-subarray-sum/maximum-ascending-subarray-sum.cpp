class Solution {
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        int n=nums.size();
        int l=0;
        int maxm=0;
        while(l<n)
        {
            int sum=0;
            int r=l;
            while(r<n-1 && nums[r]<nums[r+1])
            {
                sum=sum+nums[r]; 
                r=r+1;
            }
            sum=sum+nums[r]; 
            maxm=max(maxm,sum);
            l=r+1;
        }
        return maxm;
    }
};