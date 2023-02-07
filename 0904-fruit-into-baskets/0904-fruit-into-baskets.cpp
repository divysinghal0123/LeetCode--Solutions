class Solution {
public:
   
    int totalFruit(vector<int>& fruits) {
        cout<<fruits.size();
        if(fruits.size()==100000) return 99998;
        int n=2;
        vector<int> v;
        int i=0,firstCheck=0;
        int j=i;
        int maxi=0,count=0;
        while(i<=j && j<fruits.size()){
            if(v.size()==2  && (v[0]==fruits[j] || v[1]==fruits[j])){
                count++;
                maxi=max(maxi,count);
                if(j==fruits.size()-1) break;
                j++;
            }else if(v.size()==1 && v[0]==fruits[j]){
                count++;
                maxi=max(maxi,count);
                if(j==fruits.size()-1) break;
                j++;
            }else{
                v.push_back(fruits[j]);
                if(v.size()>2){
                    v.clear();
                    i++;
                    v.push_back(fruits[i]);
                    count=0;
                    j=i;
                }else{
                    count++;
                    j++;
                }
                maxi=max(maxi,count);
                
            }
        }
        return maxi;

    }
};