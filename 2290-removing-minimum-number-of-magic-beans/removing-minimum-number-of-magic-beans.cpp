class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        long long n=beans.size();
        long long total=0;
        long long minm=LONG_MAX;
        for(int i=0;i<n;i++)
        {
            total=total+beans[i];
        }
        for(int i=0;i<n;i++)
        {
            long long remaining = total - (long long)(beans[i]) * (long long)(n - i);
        minm = min(minm, remaining);
        }
        return minm;
    }
};