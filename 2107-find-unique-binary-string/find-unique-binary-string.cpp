class Solution {
public:
    void generateAllPossibleStrings(string indvstr,int n,vector<string> &result,int &cnt)
    {
        if(indvstr.length()==n)
        {
            result.push_back(indvstr);
            return;
        }
        generateAllPossibleStrings(indvstr+"0",n,result,cnt);
        generateAllPossibleStrings(indvstr+"1",n,result,cnt);
    }
    string findDifferentBinaryString(vector<string>& nums) 
    {
        int n=nums[0].length();
        vector<string> result;
        unordered_set <string> numset(nums.begin(),nums.end());
        int cnt=0;
        generateAllPossibleStrings("",n,result,cnt);
        for(int i=0;i<result.size();i++)
        {
            if(numset.find(result[i])==numset.end())
              return result[i];
        }
        
        return "";
    }
};