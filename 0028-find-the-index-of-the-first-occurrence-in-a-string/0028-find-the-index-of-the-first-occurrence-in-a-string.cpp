class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1 = haystack.size();
        int l2 = needle.size();
        
        int i,j;
        for(i=0;i<l1-l2+1;i++){
            for(j=0;j<l2;j++){
                if(haystack[i+j] != needle[j]) break;
                else if(j == l2-1) return i;
            }
        }
        return -1;
    }
};