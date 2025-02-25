class Solution {
public:
   vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        int n=nums.size();
        set<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                long long target2=(long long)target-(long long)nums[i]-(long long)nums[j];
                int left=j+1;
                int right=n-1;
                while(left<right)
                {
                    if(nums[left]+nums[right]==target2)
                    {
                        result.insert({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                    }   
                    else if(nums[left]+nums[right]<target2)
                        left++;
                    else
                        right--;
                }
            }
        }
        vector<vector<int>> ans(result.begin(),result.end());
        return ans;
    }

};