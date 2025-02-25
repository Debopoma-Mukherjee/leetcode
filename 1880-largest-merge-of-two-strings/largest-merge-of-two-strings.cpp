class Solution {
public:
    string largestMerge(string word1, string word2) 
    {
        int n1=word1.length();
        int n2=word2.length();
        int left=0;
        int right=0;
        string merge="";
        while(left<n1 && right<n2)
        {
            if(word1.substr(left)>word2.substr(right))
            {
                merge=merge+word1[left];
                left++;
            }
            else 
            {
                merge=merge+word2[right];
                right++;
            }
        }
        if(left<n1)
        {
            merge=merge+word1.substr(left);
        }
        if(right<n2)
        {
             merge=merge+word2.substr(right);
        }
        return merge;

    }
};