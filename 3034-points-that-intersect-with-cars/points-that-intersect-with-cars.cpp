class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) 
    {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i][0]]++;
            mpp[nums[i][1]+1]--;
        }
        int sum=0;
        int cnt=0;
        int last_point=-1;
        for(auto it:mpp)
        {
            if(sum>0 && last_point!=-1)
                cnt+=it.first-last_point;
            sum=sum+it.second;
            last_point=it.first;
        }
        return cnt;
    }
};