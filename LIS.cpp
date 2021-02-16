#include<bits/stdc++.h>
using namespace std;

int LIS(int ,int[]); 

int main()
{
    int arr[] = {41,18467,6334,26500,19169};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LIS(n,arr)<<endl;
    return 0;
}

int LIS(int n,int arr[])
{
    int lis[n];
    lis[0] = 1;
    for(int i =1;i<n;i++)
    {
        lis[i] = 1;
        for(int j = 0;j < i;j++)
        {
            if(arr[j]<arr[i])
                //lis[i] = max(lis[i],lis[j]+1);
                {
                    if (lis[j]+1>lis[i])
                        lis[i] = lis[j]+1;
                }
        }
    }

    int res = lis[0];
    for(int i =1;i<n;i++)
        {
            if (lis[i]>res)
                res = lis[i];
        }
    return res;    

}
/*
{
    if (lis[j]+1>lis[i])
        lis[i] = lis[j]+1;
}

{
    if (lis[i]>res)
        res = lis[i];
}
*/