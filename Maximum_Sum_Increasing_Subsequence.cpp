#include<bits/stdc++.h>
using namespace std;

int MIS(int arr[], int n)
{
    int t[n];
    for(int i = 0;i<n;i++)
        { t[i] = arr[i];
            for(int j =0;j<i;j++)
                {
                    if(arr[j]<arr[i])
                        t[i] = max(t[i],t[j]+arr[i]);
                }
        }
    int res = t[0];
    for(int i =1 ;i<n;i++)
        res = max(res,t[i]);
    return res;        
}

int main()
{
    int arr[] = {3,20,4,6,7,30};
    int n = 6;
    cout<<MIS(arr,n);
    return 0;
}