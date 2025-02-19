class Solution {
public:
    bool areAlmostEqual(string s1, string s2)
    {
        int length1=s1.length();
        int length2=s2.length();
        if(length1!=length2)
            return false; 
        vector<int> checkDifference;
        for(int i=0;i<length1;i++)
        {
            if(s1[i]!=s2[i])
             checkDifference.push_back(i);
        }
        if(checkDifference.size()==0)
            return true;
        else if(checkDifference.size()==2)
        {
            int diffIndex1=checkDifference[0];
            int diffIndex2=checkDifference[1];
            if((s1[diffIndex1]!=s2[diffIndex2])||(s1[diffIndex2]!=s2[diffIndex1]))
                return false;
               
        }
        else if(checkDifference.size()!=2)
            return false;

        return true;
        
    }
};