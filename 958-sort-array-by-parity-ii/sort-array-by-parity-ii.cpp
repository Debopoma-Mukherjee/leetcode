class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        int n=nums.size();
        int even=0;
        int odd=1;
        int wrongeven=-1;
        int wrongodd=-1;
        while(even<n && odd<n)
        {
            while(even<n && nums[even]%2==0)
                even=even+2;
            while(odd<n && nums[odd]%2!=0)
                odd=odd+2;
            if(even<n && odd<n)
            {
                swap(nums[even],nums[odd]);
            }
            
        }
        return nums;
    }
};