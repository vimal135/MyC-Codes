#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{
    for(int i = 1; i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
int arr[] = {50,20,40,30,11};
int n = sizeof(arr)/sizeof(arr[0]);
insertion(arr,n);
for(int x:arr)
    cout<<x<<endl;
return 0;
}