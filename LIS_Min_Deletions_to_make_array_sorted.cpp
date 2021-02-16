#include<bits/stdc++.h>
using namespace std;

int lis(int arr[],int n)
{
    int t[n];
    t[0] = 1;
    for(int i =1;i<n;i++)
    {
        t[i] = 1;
    }

    for(int i =1 ;i<n;i++)
        {
            for(int j=0;j<i;j++)
                {
                    if(arr[j]<arr[i])
                        t[i] = max(t[i],t[j]+1);
                }
        }
    int res = 1;
    for(int i = 1;i<n;i++)
        res = max(res,t[i]);
    return res;        
}

int min_deletions(int arr[],int n)
{
    int l = lis(arr,n);
    return n-l;
}

int main()
{
    int arr[] = {3,4,2,8,10,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<min_deletions(arr,n)<<endl;
    return 0;
}