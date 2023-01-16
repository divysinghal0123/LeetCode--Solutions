class Solution {
public:
    int hammingWeight(int n)
    {
        int sum=0;

        for(int i=0;i<=31;i++)
        {
            if(n&1>0) sum+=1;
            n=n>>1;
        }       

        return sum;
    }
};