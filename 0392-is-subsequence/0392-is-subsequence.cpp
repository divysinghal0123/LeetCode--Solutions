class Solution {
public:
    bool f(string &s,string &t,int m,int n){
        if(m == 0){
            return true;
        }
        if(n==0){
            return false;
        }
        if(s[m-1] == t[n-1]){
            return f(s,t,m-1,n-1);
        }else{
            return f(s,t,m,n-1);
        }
    }
    bool isSubsequence(string s, string t) {
        if(f(s,t,s.length(),t.length())){
            return true;
        }else{
            return false;
        }
    }
};