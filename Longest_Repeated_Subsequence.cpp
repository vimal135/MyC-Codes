#include<bits/stdc++.h>
using namespace std;

int lrs(string s1, string s2, int n, int m)
{
    int t[n+1][m+1];
    memset(t,0,sizeof(t));
    for (int i = 0; i<=n;i++)
    {
        for(int j = 0; j<=m;j++)
        {
            if (i==0 || j==0)
                t[i][j] = 0;

            else if (s1[i-1] == s2[j-1] && i!=j)
                t[i][j] = 1 + t[i-1][j-1];
            else
            {
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
                    
        }
    }
    return t[n][m];
}

int main()
{
string s = "AABEBCDD";
cout<<lrs(s,s,8,8)<<endl;

return 0;
}