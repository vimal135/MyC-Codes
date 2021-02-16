#include<bits/stdc++.h>
using namespace std;

int minjumps_dp(int arr[], int n)
{
    if (n==0 || arr[0]==0)
        return INT_MAX;
    
    int t[n];
    t[0] = 0;
    for (int i = 1;i<n;i++)
        t[i] = INT_MAX;

    for (int i =1 ;i < n; i++)
    {
        for (int j = 0; j < i ;j++)
        {
            if( arr[i]+ j >=i && t[j]!= INT_MAX)
            {
                if (t[j]!=INT_MAX)
                    {
                        t[i] = min(t[i],t[j]+1);
                        break;
                    }
                    
            }
        }
    }
    return t[n-1];    
}

int minjumps(int arr[],int n)
{
    if (n==1)
        return 0;

    int res = INT_MAX;
    for(int i = 0;i<n-1;i++)
    {
        if (i + arr[i]>=n-1)
        {
            int sub_res = minjumps(arr,i+1);
            if(sub_res!=INT_MAX)
                res = min(res,sub_res+1);
        }
    }

    return res;    
}

int main()
{
    int arr1[] = {3,4,2,1,2,1};
    int arr2[] = {4,1,5,3,1,3,2,1,8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    //cout<<n1<<" "<<n2<<endl;
    cout<<minjumps(arr1,n1)<<endl;
    cout<<minjumps(arr2,n2)<<endl;
    cout<<minjumps_dp(arr1,n1)<<endl;
    cout<<minjumps_dp(arr2,n2)<<endl;
    return 0;
}