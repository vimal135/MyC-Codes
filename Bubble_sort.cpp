#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped = false)
            break;
    }
}

int main()
{
    int arr[] = {1,4,3,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int x:arr)
        cout<<x<<endl; 

return 0;
}