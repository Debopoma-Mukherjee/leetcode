class Solution {
public:
    bool partition(string temp,int pos,int sum,int val)
    {
        if(pos>=temp.size())
            return sum==val;
        int n=temp.length();
        for(int i=0;i+pos<n;i++)
        {
            int tillNowValue=stoi(temp.substr(pos,i+1));
            if(partition(temp,i+1+pos,sum+tillNowValue,val))
             return true;
            
        }
        return false;

    }
    int punishmentNumber(int n) 
    {
        int punishment_number=1;
        for(int i=2;i<=n;i++)
        {
            string temp=to_string(i*i);
            if(partition(temp,0,0,i))
            {
                punishment_number+=i*i;
            }
        }
        return punishment_number;
    }
};