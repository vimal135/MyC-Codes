#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
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

void BFS(vector<int> adj[],int s,bool visited[])
{
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while(q.empty()==false)
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int x:adj[u])
        {
            if(visited[x]==false)
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }

}

void BFSDis(vector<int> adj[],int V)
{
    bool visited[V+1];
    for(int i = 0;i<V;i++)
        visited[i] = false;
    for(int i = 0;i<V;i++)
    {
        if(visited[i]==false)
            BFS(adj,i,visited);
    }    
}

int main()
{
    int V = 4;
    vector<int> adj[V];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,1,3);
    //printgraph(adj,V);
    BFSDis(adj,V);

return 0;
}