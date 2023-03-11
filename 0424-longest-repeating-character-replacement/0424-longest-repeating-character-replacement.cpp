class Solution {
public:
    int characterReplacement(string str, int k) {
     vector<int>m(26);
     int left=0;
     int right=0;
     int maxFreq=0;
     int ans=0;

     while(right<str.length() and left<=right){
         m[str[right]-'A']++;
         maxFreq=max(maxFreq, m[str[right]-'A']);

         if(((right-left+1)-maxFreq)>k){
           
           while(((right-left+1)-maxFreq)>k){
              m[str[left]-'A']--;
              maxFreq=*max_element(m.begin(),m.end());
              left++;
           }
         }

         ans=max(ans,(right-left+1));
         right++;
     }
     return ans;
       
    }
};