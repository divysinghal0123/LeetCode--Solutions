class Solution{
public:
    int snakesAndLadders(vector<vector<int>>& board){
        int r=board.size(),c=board[0].size();
        int val=1;
        map<int,int> m;
        int check=0;
        for(int i=r-1;i>=0;i--){
            if(check==0){
                for(int j=0;j<c;j++){
                    if(board[i][j]==-1) m[val]=val;
                    else m[val]=board[i][j];
                    val++;
                }
                check=1;
            }
            else{
                for(int j=c-1;j>=0;j--){
                    if(board[i][j]==-1) m[val]=val;
                    else m[val]=board[i][j];
                    val++;
                }
                check=0;
            }
        }
        set<int> vis;
        queue<pair<int,int>> q;
        q.push({1,0});
        vis.insert(1);
        while(q.size()>0){
            int sz=q.size();
            while(sz--){
                int front=q.front().first;
                int moves=q.front().second;
                if(front==r*c) return moves;
                q.pop();
                for(int i=1;i<=6;i++){
                    if(front+i>r*c) break;
                    int newx=m[front+i];
                    if(vis.find(newx)==vis.end()){
                        q.push({newx,moves+1});
                        vis.insert(newx);
                    }
                }
            }
        }
        return -1;
    }
};