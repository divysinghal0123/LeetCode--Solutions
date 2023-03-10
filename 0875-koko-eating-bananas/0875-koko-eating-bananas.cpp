class Solution {
public:
    bool check(int k,int h,vector<int>& piles){
        int total=0;
        for(auto &banana : piles){
            total+=(banana+k-1)/k;
        }
        if(h<total) return false;
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1,end=1e9;
        while(start<end){
            int mid=(start+end)>>1;

            if(check(mid,h,piles)) end=mid;
            else start=mid+1;
        }

        return start;
    }
};