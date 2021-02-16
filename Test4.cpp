#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    unordered_map <int,int> umap;
    vector <int> nl;
    cin>>n>>t;
    int temp;
    for(int i = 0;i<n;i++)
    {
        cin>>temp;
        umap[temp] = 0;
        nl.push_back(temp);
    }

    for(int i = 0;i<n;i++)
    {
        if(umap.find(t-nl[i])!=umap.end())
            
    }


        

    
    return 0;    
    
}



