class Solution {
public:
     //Brute Force Time limit Exceeded
    /*void oddSumSubArrays(vector<int>& arr,int i,int n,int sum,int &cnt)
    {
        if(i==n)
            return;
        sum=sum+arr[i];
        if(sum%2!=0)
            cnt++;
        oddSumSubArrays(arr,i+1,n,sum,cnt);
    }
    int numOfSubarrays(vector<int>& arr) 
    {
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            oddSumSubArrays(arr,i,n,0,cnt);
        }
        return cnt;
    }*/

    //Memorization
   void oddSumSubArrays(vector<int>& arr, int i, int n, int sum, int &cnt, unordered_map<int, int> &dp) {
        if (i == n) 
            return;
        sum += arr[i];
        if (sum % 2 != 0)
        {
            cnt = (cnt + dp[0]) % (1000000007); //oddsum=newoddsum+prevevensum;
            dp[1]++; 
        } else
        {
            cnt = (cnt + dp[1]) % (1000000007); 
            dp[0]++; //oddsum=newevensum+allprevoddsum
        }
        oddSumSubArrays(arr, i + 1, n, sum, cnt, dp);
    }

    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        unordered_map<int, int> dp;
        dp[0] = 1; //initial sum 0 (even)
        oddSumSubArrays(arr, 0, n, 0, cnt, dp);
        return cnt;
    }
};