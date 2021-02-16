#include<bits/stdc++.h>
using namespace std;

int SCS(string,string,int,int);

int main()
{
    string s1 = "geeks";
    string s2 = "gefks";
    int n = 5;
    int m = 5;
    cout<<SCS(s1,s2,n,m);
    return 0;
}

int lcs(string s1, string s2, int n, int m)
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
    return t[n][m];

}

int SCS(string s1, string s2, int n, int m)
{
    int l = lcs(s1,s2,n,m);
    return m+n-l;
}