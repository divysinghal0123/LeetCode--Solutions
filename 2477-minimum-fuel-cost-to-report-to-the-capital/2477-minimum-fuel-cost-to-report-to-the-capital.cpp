class Solution {
public:
    vector<long long> helper(vector<vector<int>>& graph, int seats, vector<bool>& visited, int node)
    {
        visited[node]=true;
        if(graph[node].size()==1 && visited[graph[node][0]])
        {
            return {1,1,0}; //{no. of car used, no.of seats occupied, total fuel consumed}
        }
        long long car=0;
        long long fuel=0;
        long long seat=0;
        for(int i=0;i<graph[node].size();i++)
        {
            if(!visited[graph[node][i]])
            {
                vector<long long> v=helper(graph,seats,visited,graph[node][i]);
                car+=v[0];
                seat+=v[1];
                fuel+=v[2];
            }
        }
        fuel+=car;  //each car will take 1L fuel 
        seat++; //increament seat for current node
        car=ceil((double)seat/(double)seats);   //optimize use of car for no of seats occupied till now
        return {car,seat,fuel}; //{no. of car used, no.of seats occupied, total fuel consumed}
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n=roads.size();
        if(n<=1)
            return n;
        vector<vector<int>> graph(n+1);
        for(int i=0;i<n;i++)
        {
            graph[roads[i][0]].push_back(roads[i][1]);
            graph[roads[i][1]].push_back(roads[i][0]);
        }   
        vector<bool> visited(n+1,false);
        return helper(graph,seats,visited,0)[2];
    }
};