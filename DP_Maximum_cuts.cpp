#include<bits/stdc++.h>
using namespace std;

int max_cut_recursion(int,int,int,int);
int maxcut(int,int,int,int);

int main()
{
    int n =5;
    int a = 1;
    int b =2;
    int c =3;
    //cout<<max_cut_recursion(n,a,b,c)<<endl;
    cout<<maxcut(n,a,b,c);
    return 0;
}

int max_cut_recursion(int n, int a,int b,int c)
{
    if (n<0)
        return -1;
    if(n==0)
        return 0;
    int res = max(max_cut_recursion(n-a,a,b,c),max(max_cut_recursion(n-b,a,b,c),max_cut_recursion(n-c,a,b,c)));

    if (res==-1)
        return res;

    return res+1;            
}

int maxcut(int n, int a, int b ,int c)
{
    int t[n+1];
    t[0] = 0;

    for(int i = 1; i<=n;i++)
    {
        t[i] = -1;
        if(i-a>=0)
            t[i]  = max(t[i],t[i-a]);
        if(i-b>=0)
            t[i]  = max(t[i],t[i-b]);    
        if(i-c>=0)
            t[i]  = max(t[i],t[i-c]);
        if (t[i]!=-1)
            t[i]++;    
    }
    return t[n];
}