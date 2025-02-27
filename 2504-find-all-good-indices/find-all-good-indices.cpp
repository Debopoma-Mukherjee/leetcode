class Solution {
public:
    vector<int> goodIndices(vector<int>& security, int k) {
   {
    int n = security.size();
    vector<int> ans;

    // Early return if k is too large
    if (k * 2 > n) 
        return ans;

    // Calculate prefix sums for non-increasing order
    vector<int> prefix(n, 0);
    for (int i = 1; i < n; i++) {
        if (security[i] <= security[i - 1]) {
            prefix[i] = prefix[i - 1] + 1; // count of non-increasing elements
        }
    }

    // Calculate suffix sums for non-decreasing order
    vector<int> suffix(n, 0);
    for (int i = n - 2; i >= 0; i--) {
        if (security[i] <= security[i + 1]) {
            suffix[i] = suffix[i + 1] + 1; // count of non-decreasing elements
        }
    }

    // Check for good indices
    for (int i = k; i < n - k; i++) {
        if (prefix[i - 1] >= k - 1 && suffix[i + 1] >= k - 1) {
            ans.push_back(i);
        }
    }

    return ans;
}
    }
};