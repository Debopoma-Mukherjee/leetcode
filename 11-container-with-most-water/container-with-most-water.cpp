class Solution {
public:
    int maxArea(vector<int>& h) 
    {
        int n=h.size();
        int left=0;
        int right=n-1;
        long long maxm=-1;
        while(left<right)
        {
            int height=min(h[left],h[right]);
            int width=right-left;
            long long area=(long long)height*width;
            maxm=max(maxm,area);
            if(h[left]<h[right])
             left++;
            else
             right--;

        }
        return maxm;

        
    }
};