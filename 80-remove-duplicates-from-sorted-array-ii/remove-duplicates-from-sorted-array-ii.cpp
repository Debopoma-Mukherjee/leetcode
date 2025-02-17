class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int cnt=1;
        int k=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                cnt++;
                
            }
            else
            {
                cnt=1;
            }  
            if(cnt<=2)
            {
                nums[k]=nums[i];
                k++;
            }
            
        }
        return k;
    }
    
};