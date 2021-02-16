#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int n)
{
    for (int i = 0; i<n-1;i++)  //n-1 cause last element will alrady be sorted
    {
        int min_i = i;
        for(int j = i+1;j<n;j++)
        {
            if (arr[j]<arr[min_i])
                min_i = j;
        }
        swap(arr[i],arr[min_i]);
    }
}

int main()
{
int arr[] = {2,4,3,15,12};
int n = sizeof(arr)/sizeof(arr[0]);
selection(arr,n);
for(int x:arr)
    cout<<x<<endl;
return 0;
}