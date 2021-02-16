#include <bits/stdc++.h>

using namespace std;

//vector<int> visited(5,0);

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

vector<int>  DFS(vector<int> adj[],int s,int d,bool visited[])
{
    if(s==d)
    {
        vector <int> ans;
        ans.push_back(d);
        return ans;
    }
    visited[s] = true;
    for(int x: adj[s])
    {
        if(visited[x]==false)
        {
            vector <int> ans = DFS(adj,x,d,visited);
            if(ans!=NULL)
                ans.push_back(s);
        }
            
    }

    return NULL;

}




int main()
{
    int V = 4;
    vector<int> adj[V];
    addedge(adj,0,1);
    addedge(adj,0,3);
    addedge(adj,1,2);
    addedge(adj,2,3);
    printgraph(adj,V);
    bool visited[V+1];
    for(int i = 0;i<V;i++)
        visited[i] = false;
    vector <int> ans = DFS(adj,V,0,2,visited);

return 0;
}