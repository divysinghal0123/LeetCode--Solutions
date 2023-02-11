class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<int> ans(n,INT_MAX);
        vector<vector<pair<int,int>>> sol(n);
        for(int i=0;i<redEdges.size();i++)
        {
            sol[redEdges[i][0]].push_back({redEdges[i][1],0});
        }
        for(int i=0;i<blueEdges.size();i++)
        {
            sol[blueEdges[i][0]].push_back({blueEdges[i][1],1});
        }
        vector<vector<int>>visited(n,vector<int>(2,0));
        int count=0;
        for(int i=0;i<n;i++)
        {
            {
                queue<pair<int,int>> q;
                q.push({0,-1});
                while(!q.empty())
                {
                    int x=q.size();
                    while(x--){
                    pair<int,int> temp=q.front();
                    q.pop();
                    if(temp.first==0 || visited[temp.first][temp.second]!=1)
                    {
                    if(temp.first!=0){
                    visited[temp.first][temp.second]=1;}
                    else
                    {
                        if(visited[temp.first][1]==1 && visited[temp.first][0]==1)
                        {
                            continue;
                        }
                        visited[temp.first][1]=1;
                        visited[temp.first][0]=1;
                    }
                    ans[temp.first]=min(ans[temp.first],count);
                    if(temp.second!=0)
                    {
                        for(int j=0;j<sol[temp.first].size();j++)
                        {
                            if(sol[temp.first][j].second==0)
                            {
                                q.push({sol[temp.first][j].first,0});
                            }
                        }
                    }
                    if(temp.second!=1)
                    {
                        for(int j=0;j<sol[temp.first].size();j++)
                        {
                            if(sol[temp.first][j].second==1)
                            {
                                q.push({sol[temp.first][j].first,1});
                            }
                        }
                    }
                    }
                    }
                    count++;
                }
            }

        }
        for(int i=0;i<n;i++)
        {
            if(ans[i]==INT_MAX)
            {
                ans[i]=-1;
            }
        }
        return ans;
    }
};