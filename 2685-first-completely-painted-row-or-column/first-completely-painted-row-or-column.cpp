class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) 
    {
        int n= mat.size();
        int m=mat[0].size();
        map<int,pair<int,int>> storedIndex;
        vector<int> rowStatus(n,0);
        vector<int> colStatus(m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                storedIndex[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            auto it=storedIndex.find(arr[i]);
            if(it!=storedIndex.end())
            {
                int row=it->second.first;
                int col=it->second.second;
                rowStatus[row]++;
                colStatus[col]++;
                if((rowStatus[row]==m)||(colStatus[col]==n))
                    return i;
            }
           
        }
        return -1;
        
    }
};