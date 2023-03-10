class Solution {
public:
    string getHint(string secret, string guess) {
        int x=0;
        int y=0;
        vector<int> g(10);
        for(int i=0; i<guess.length(); i++){
            if(secret[i]==guess[i]){
                x++;
            }
            else{
                g[guess[i]-'0']++;
            }
        } 
        for(int i=0; i<secret.length(); i++){
            if(secret[i]!=guess[i] && g[secret[i]-'0']>0){
                    y++;
                    g[secret[i]-'0']--;
            }
        }
        return to_string(x)+"A"+to_string(y)+"B";
    }
};