class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        set<vector<int>> finalResult;
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                if(nums[i]+nums[left]+nums[right]==0)
                {
                    finalResult.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(nums[i]+nums[left]+nums[right]<0)
                    left++;
                else
                    right--;

            }
        }
        vector<vector<int>> ans(finalResult.begin(),finalResult.end());
        return ans;
    }
};