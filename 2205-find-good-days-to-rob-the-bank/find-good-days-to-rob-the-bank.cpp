class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) 
    {
        int n=security.size();
        vector<int> ans;
        vector<int> prefixSum(n,0);
        vector<int> suffixSum(n,0);
        if(time>n)
          return ans;
        for(int i=1;i<n;i++)
        {
            if(security[i-1]>=security[i])
                prefixSum[i]=prefixSum[i-1]+1;
            
        }
        for(int i=n-2;i>=0;i--)
        {
            if(security[i+1]>=security[i])
                suffixSum[i]=suffixSum[i+1]+1;
        }
        for(int i=time;i<security.size()-time;i++)
        {
            if(prefixSum[i]>=time && suffixSum[i]>=time)
              ans.push_back(i);
        }
        return ans;

    }
};