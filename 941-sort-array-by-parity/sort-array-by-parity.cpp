class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int odd=0;
        int n=nums.size();
        while(odd<n)
        {
            if(nums[odd]%2!=0)
            {
                int even=odd+1;
                while(even<n)
                {
                    if(nums[even]%2==0)
                        swap(nums[odd],nums[even]);
                    even++;
                }
            }
            odd++;
        }   
        return nums;     
    }
};