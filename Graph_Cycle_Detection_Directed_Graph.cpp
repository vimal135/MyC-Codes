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

bool DFSrec(vector<int> adj[],int s,bool visited[],bool rec[])
{
    visited[s] = true;
    rec[s] = true;

    for(int x: adj[s])
    {
        if(visited[x]==false && DFSrec(adj,x,visited,rec))
            {
                return true;
            }
        else
        {
            if(rec[x]==true)
                return true;
        }
            
    }
    rec[s] = false;
    return false;

}

int DFS(vector<int> adj[],int V)
{
    bool visited[V+1];
    bool rec[V+1];
    for(int i = 0;i<V;i++)
    {
        visited[i] = false;
        rec[i] = false;
    }
        
    for(int i = 0;i<V;i++)
    {
        if(visited[i]==false)
        {
            if(DFSrec(adj,i,visited,rec)==true)
                return true;
        }
            
    }
    return false;    
}

int main()
{
    int V = 4;
    vector<int> adj[V];
    addedge(adj,0,1);
    addedge(adj,1,2);
    addedge(adj,2,3);
    addedge(adj,3,1);
    //printgraph(adj,V);
    cout<<DFS(adj,V)<<endl;

return 0;
}