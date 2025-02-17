class Solution {
public:
    bool isArraySpecial(vector<int>& nums) 
    {
        if(nums.size()==1)
            return true;
        int l=0;
        int r=1;
        while(l<nums.size()-1)
        {
            if((nums[l]%2==0 && nums[r]%2==0 )|| (nums[l]%2!=0 && nums[r]%2!=0))
                return false;
            l=r;
            r=l+1;

        }  
        return true;
    }
};