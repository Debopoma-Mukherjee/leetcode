class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
          return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) 
    {
        vector<int> prefixSum(words.size()+1);
        vector<int> result;
        prefixSum[0]=0;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            if(isVowel(words[i].at(0)) && isVowel(words[i].at(words[i].length()-1)))
                prefixSum[i+1]=prefixSum[i]+1;
            else
                prefixSum[i+1]=prefixSum[i];

        }
        for(int i=0;i<=n;i++)
         cout<<prefixSum[i];
        for(int i=0;i<queries.size();i++)
        {
            result.push_back(abs(prefixSum[queries[i][0]]-prefixSum[queries[i][1]+1]));
        }
        return result;
    }
};