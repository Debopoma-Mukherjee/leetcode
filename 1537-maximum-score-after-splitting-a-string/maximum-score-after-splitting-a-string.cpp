class Solution {
public:
    int maxScore(string s) 
    {
        int n=s.length();
        int l=0;
        int r=1;
        int maxm=0;
        while(r<n)
        {
            int cnt0=0;
            int cnt1=0;
            for(int i=l;i<r;i++)
            {
                if(s[i]=='0')
                  cnt0++;
            }
            for(int i=r;i<n;i++)
            {
                if(s[i]=='1')
                  cnt1++;
            }
            maxm=max(maxm,cnt0+cnt1);
            r=r+1;
        }
        return maxm;
    }
};