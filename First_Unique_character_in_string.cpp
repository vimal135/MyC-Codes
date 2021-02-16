#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) 
    {
        unordered_map <char,int> umap;
        for(int i = 0;i<s.length();i++)
        {
            umap[s[i]]++;
        }
        for(auto x:umap)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        int count = 0;        
        for(auto x:umap)
        {
            if(x.second==1)
                return count;
            count++;
        }
        return -1;
        
    }

int main()
{
    cout<<firstUniqChar("loveleetcode")<<endl;

return 0;
}

