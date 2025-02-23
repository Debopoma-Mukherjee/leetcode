class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int minm=INT_MAX;
        int result=0;
        for(int i=0;i<n-2;i++)
        {
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target)
                {
                    return target;
                }
                else if(sum<target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
                
                if(abs(sum-target)<minm)
                {
                    minm=abs(target-sum);
                    result=sum;
                }
            }
            

        }
        return result;
    }
};