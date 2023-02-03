class Solution {
public:
    string convert(string s, int n) {
        vector<vector<char>>v(n);
        if(n==1) return s;
        int d=-1,k=0;
        for(auto c:s){
            v[k].push_back(c);
            if(k%(n-1)==0) d*=-1;
            k+=d;
        }
        string res="";
        for(auto o:v){
            for(auto f:o){
               res+=f; 
            }
        }

        return res;
    }
};