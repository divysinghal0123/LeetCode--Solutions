class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        queue<int> q;
        int n=edges.size();
        vector<int> v(n, 0), a(n, INT_MAX), b(n, INT_MAX);
        q.push(node1);
        v[node1]=1;
        a[node1]=0;
        while(!q.empty())
        {
            int t=edges[q.front()];
            if(t==-1)
            break;
            if(v[t]==0)
            {
                v[t]=1;
                q.push(t);
                a[t]=a[q.front()]+1;
            }
            q.pop();
        }
        while(!q.empty())
        q.pop();
        v.clear();
        for(int i=0;i<n;i++)
        v[i]=0;
        q.push(node2);
        v[node2]=1;
        b[node2]=0;
        while(!q.empty())
        {
            int t=edges[q.front()];
            if(t==-1)
            break;
            if(v[t]==0)
            {
                v[t]=1;
                q.push(t);
                b[t]=b[q.front()]+1;
            }
            q.pop();
        }
        int ans=INT_MAX;
        int ind=-1;
        for(int i=0;i<n;i++)
        {
                int mx=max(a[i], b[i]);
                if(ans>mx)
                {
                    ans=mx;
                    ind=i;
                }
        }
        return ind;
    }
};