class Solution {
public:
    int bestClosingTime(string customers) 
    {
        int n=customers.size();
        vector<int> prefixSum;
        vector<int> suffixSum;
        prefixSum.push_back(0);
        suffixSum.push_back(0);
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(customers[j]=='N')
                cnt++;
            prefixSum.push_back(cnt);
        }
        cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(customers[i]=='Y')
                cnt++;
            suffixSum.push_back(cnt);
        }
        reverse(suffixSum.begin(),suffixSum.end());
        int min_penalty=INT_MAX,ind=0;
        for(int i=0;i<prefixSum.size();i++)
        {
            int penalty=prefixSum[i]+suffixSum[i];
            if(penalty<min_penalty)
            {
                min_penalty=penalty;
                ind=i;
            }
        }
        return ind;

    }
};