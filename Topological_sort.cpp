#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    //adj[v].push_back(u);
}

void printgraph(vector<int> adj[], int V)
{
    for(int i = 0; i<V;i++)
    {
        for(int x:adj[i])
            cout<<x<<" ";
        cout<<endl;    
    }
}

void topological_sort(vector<int> adj[],int V)
{
    int indegrees[V+1];
    memset(indegrees,0,sizeof(indegrees));
    for(int i = 0;i<V;i++)
    {
        for(int x:adj[i])
            indegrees[x]++;
    }
    cout<<indegrees[3]<<endl;
    queue<int> q;
    for(int i = 0;i<V;i++)
    {
        if(indegrees[i]==0)
            q.push(i);
    }
    while(q.empty()==false)
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int x:adj[u])
        {
            indegrees[x]--;
            if(indegrees[x]==0 )
            {
                q.push(x);
            }
        }
    }

}



int main()
{
    int V = 6;
    vector<int> adj[V];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,3);
    addedge(adj,2,3);
    addedge(adj,3,4);
    addedge(adj,3,5);
    printgraph(adj,V);
    topological_sort(adj,V);

return 0;
}