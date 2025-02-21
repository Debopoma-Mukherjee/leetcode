class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n=plants.size();
        int i=0;
        int j=n-1;
        int initialCapacityA=capacityA;
        int initialCapacityB=capacityB;
        int cnt=0;
        while(i<j)
        {
            if(capacityA<plants[i])
            {
               capacityA=initialCapacityA;
               cnt++; 
            }
            capacityA=capacityA-plants[i];
            if(capacityB<plants[j])
            {
               capacityB=initialCapacityB;
               cnt++;
            }
            capacityB=capacityB-plants[j];
            i++;
            j--;
        }
        if(i==j)
        {
            if(capacityA>=capacityB)
            {
                if(capacityA<plants[i])
                {
                    capacityA=initialCapacityA;
                    cnt++; 
                }
                capacityA=capacityA-plants[i];

            }
            else
            {
                if(capacityB<plants[j])
                {
                    capacityB=initialCapacityB;
                    cnt++;
                }
                capacityB=capacityB-plants[j];
            }
        }
        return cnt;

    }
};