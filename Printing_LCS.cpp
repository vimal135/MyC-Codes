#include<bits/stdc++.h>
using namespace std;

string print_lcs(string s1, string s2, int n, int m)
{
    int t[n+1][m+1];
    memset(t,0,sizeof(t));
    for (int i = 0; i<=n;i++)
    {
        for(int j = 0; j<=m;j++)
        {
            if (i==0 || j==0)
                t[i][j] = 0;

            else if (s1[i-1] == s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
            else
            {
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
                    
        }
    }
    string s = "";
    int i = n;
    int j = m;
    while(i>0 && j>0)
    {
        if (s1[i-1]==s2[j-1])
        {
            s.push_back(s1[i-1]);
            i--;
            j--;
        }

        else
        {
            if(t[i][j-1]>t[i-1][j])
                j--;
            else
            {
                i--;
            }
                
        }
        
    }
    reverse(s.begin(),s.end());
    return s;
    
}

int main()
{ 
    string s1 = "geeks";
    string s2 = "gooks";
    int n = 5;
    int m = 5;
    cout<<print_lcs(s1,s2,n,m)<<endl; 

    return 0;
}