class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {
        int mod=1e9+7;
        int n=nums.size();
         vector<long long> position(n);
        
            for(long long i=0;i<nums.size();i++)
            {
               if (s[i] == 'L')
                position[i] = (long long)nums[i] - d;
            else
                position[i] = (long long)nums[i] + d;
            }
 
       sort(position.begin(), position.end());

        long long prefixsum = 0;
        long long ans = 0;

        for (long long i = 0; i < nums.size(); i++) {
            ans = (ans + ((1LL * i * position[i]) % mod - prefixsum + mod) % mod) % mod;
            prefixsum = (prefixsum + position[i]) % mod;
        }
        return (int)ans;
    }
};