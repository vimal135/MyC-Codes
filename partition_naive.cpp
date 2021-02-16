#include<bits/stdc++.h>
using namespace std;

void partition(int arr[],int l, int h, int k)
{
    int temp[h-l+1];
    int index = 0;
    for(int i = l;i<=h;i++)
    {
        if(arr[i]<=k)
        {
            temp[index] = arr[i];
            index++;
        }
    }
     for(int i = l;i<=h;i++)
    {
        if(arr[i]>k)
        {
            temp[index] = arr[i];
            index++;
        }
    }
     for(int i = l;i<=h;i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1,5,6,3,4,2};
    partition(arr,0,5,4);
    for(int x:arr)
        cout<<x<<endl;

return 0;
}