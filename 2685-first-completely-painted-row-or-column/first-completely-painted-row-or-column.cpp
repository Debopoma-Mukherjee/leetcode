class Solution {
public:
    /*int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) 
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
        int row;
        int col;
        for(int i=0;i<arr.size();i++)
        {
            auto it=storedIndex.find(arr[i]);
            if(it!=storedIndex.end())
            {
                 row=it->second.first;
                 col=it->second.second;
            }
            rowStatus[row]++;
            colStatus[col]++;
            if((rowStatus[row]==n)||(colStatus[col]==m))
                return i;
        }
        return -1;
        
    }*/

    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    map<int, pair<int, int>> storedIndex;
    vector<int> rowStatus(n, 0);
    vector<int> colStatus(m, 0);

    // Store indices of elements in the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            storedIndex[mat[i][j]] = {i, j};
        }
    }

    // Find the first complete index
    for (int i = 0; i < arr.size(); i++) {
        auto it = storedIndex.find(arr[i]);
        if (it != storedIndex.end()) {
            int row = it->second.first;  // Get the row index
            int col = it->second.second;  // Get the column index

            // Update the row and column statuses
            rowStatus[row]++;
            colStatus[col]++;

            // Check for a complete row or column
            if (rowStatus[row] == m || colStatus[col] == n) {
                return i; // Return the current index
            }
        }
    }
    return -1; // Return -1 if no complete row or column is found
}
};