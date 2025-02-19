class Solution {
public:
    string getHappyString(int n, int k) 
    {
        vector<string> stringsOfSizeN;
        queue<string> q;
        q.push("a");
        q.push("b");
        q.push("c");
        while(!q.empty())
        {
            string temp=q.front();
            q.pop();
            if(temp.size()==n)
            {
                stringsOfSizeN.push_back(temp);
                continue;
            }
            string first=temp;
            string second=temp;
            if(temp.back()=='a')
            {
                first.push_back('b');
                second.push_back('c');
            }    
            else if(temp.back()=='b')
            {
                first.push_back('a');
                second.push_back('c');
            }
            else
            {
                first.push_back('a');
                second.push_back('b');

            }
            q.push(first);
            q.push(second);

        }
        if(stringsOfSizeN.size()<k)
           return "";
        return stringsOfSizeN[k-1];

    }
};