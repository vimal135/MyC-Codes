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

void DFSrec(vector<int> adj[],int s,bool visited[])
{
    visited[s] = true;
    cout<<s<<" ";
    for(int x: adj[s])
    {
        if(visited[x]==false)
            DFSrec(adj,x,visited);
    }

}

int DFS(vector<int> adj[],int V)
{
    int count = 0;
    bool visited[V+1];
    for(int i = 0;i<V;i++)
        visited[i] = false;
    for(int i = 0;i<V;i++)
    {
        if(visited[i]==false)
        {
            DFSrec(adj,i,visited);
            count++;
        }
            
    }
    return count;    
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
    cout<<DFS(adj,V)<<endl;

return 0;
}