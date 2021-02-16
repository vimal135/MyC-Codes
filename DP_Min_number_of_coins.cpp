#include<bits/stdc++.h>
using namespace std;

int coin_change_dp(int arr[],int val, int n)
{
    int t[val+1];
    t[0] = 0;

    for(int i =1 ; i<n; i++)
        t[i] = INT_MAX;
    for(int i =1 ; i<n; i++)
    {   
        for(int j = 0;j<i;j++)
        {
            if(arr[j]<=i)
            {
                int subres = t[i-arr[j]];
                if(subres!=INT_MAX)
                    t[i] = min(t[i],subres+1);
            }
        }
    }
    return t[val];
}


int coin_change(int arr[],int val,int n)
{
    if (val == 0)
        return 0;
    int res = INT_MAX;
    for(int i =0;i<n;i++)
    {
        if (arr[i]<=val)
        {
            int sub_res = coin_change(arr,val - arr[i],n);
            if(sub_res!=INT_MAX)
                res = min(res,sub_res+1);
        }    

    }    
    return res;
}

int main()
{
    int arr[] = {9,6,5,1};
    int n = 4;
    int val = 11;
   // cout<<coin_change(arr,val,n)<<endl;
    cout<<coin_change_dp(arr,val,n)<<endl;
    return 0;
}