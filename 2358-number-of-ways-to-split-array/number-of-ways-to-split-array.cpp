class Solution {
public:

    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int cnt=0;
        long long leftsum=0;
        for(int i=0;i<n-1;i++)
        {
            leftsum=leftsum+nums[i];
            long long rightsum=sum-leftsum;
            if(leftsum>=rightsum)
                cnt++;
            
        }
        return cnt;
    }
};