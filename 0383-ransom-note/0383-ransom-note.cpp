class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int>mp;
        for(int i=0;i<magazine.size();i++){
               mp[magazine[i]]++;
        }
        int c=0;
        int n=ransomNote.size();
        for(int i=0;i<ransomNote.size();i++){
              if(mp[ransomNote[i]]!=0){
                    c++;
                    mp[ransomNote[i]]--;
              }
        }
        if(c==n) return true;
        return false;
    }
};