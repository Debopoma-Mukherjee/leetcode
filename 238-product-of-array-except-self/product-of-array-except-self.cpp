class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> prefixProduct(n,1);
        vector<int> suffixProduct(n,1);
        vector<int> result;
        for(int i=0;i<n-1;i++)
        {
            prefixProduct[i+1]=prefixProduct[i]*nums[i];
        }
        for(int i=n-1;i>0;i--)
        {
            suffixProduct[i-1]=suffixProduct[i]*nums[i];
        }
        for(int i=0;i<n;i++)
        {
            result.push_back(prefixProduct[i]*suffixProduct[i]);
        }
        return result;
    }
};