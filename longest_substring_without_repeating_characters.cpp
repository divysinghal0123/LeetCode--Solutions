class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int low=0,right=0;
        string strtemp="";
        int mx=0;
        int cnt=0;
        if(s.length()==0){
 return 0;
        }
       map<char,int>hash; //             
     while(right<=s.length()-1){ //        
      if(hash[s[right]]==0){
         hash[s[right]]++;
          right++;
      }
 else if(hash[s[right]]!=0){
     hash[s[low]]--;
low++;
      }
      mx=max(mx,right-low+1);
    }
    return mx-1;
}
    
};
