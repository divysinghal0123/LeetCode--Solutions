class Solution {
public:
 
    int rob(vector<int>& nums) {
        int n=nums.size();
        //if(n==1) return nums[0];
        vector<int>t(n+1,0);
        // fill the state array t using condition 1. steal 2.skip
        //if there is no house
        t[0]=0;
        //if there is one house 
        t[1]=nums[0];

        // start filling t states from indices 2;
        for(int i=2;i<=n;i++){
            // if steal curr house  
            int steal = nums[i-1]+t[i-2];
            // if skip current house
            int skip=t[i-1];
            // update state array
            t[i]=max(steal,skip);
        }
        // return nth index of state array becase ans is stored in it
        return t[n];
        
    }
};