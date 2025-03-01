class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        int n=trips.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[trips[i][1]]+=trips[i][0];
            mpp[trips[i][2]]-=trips[i][0];
        }
        int travellers=0;
        for(auto it:mpp)
        {
            travellers=travellers+it.second;
            if(travellers>capacity)
                return false;
        }
        return true;

        
    }
};