class Solution {
public:
    int numberOfCombinations(vector <int> &freqTracker)
    {
        int ways=0;
        for(int i=0;i<26;i++)
        {
            if(freqTracker[i]>0)
            {
                freqTracker[i]--;
                ways+=1+numberOfCombinations(freqTracker);
                freqTracker[i]++;
            }
        }
        return ways;
    }
    int numTilePossibilities(string tiles)
    {
        int n=tiles.size();
        vector <int> freqTracker(26,0);
        for(int i=0;i<n;i++)
        {
           freqTracker[tiles[i]-'A']++;
        }
        return numberOfCombinations(freqTracker);
    }
};