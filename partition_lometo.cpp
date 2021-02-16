#include<bits/stdc++.h>
using namespace std;

void partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l-1;
    for(int j = l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        swap(arr[i+1],arr[h]);
    }
}

int main()
{
int arr[] = {10,80,30,90,40,50,70};
partition(arr,0,6);
for(int x:arr)
    cout<<x<<endl;
return 0;
}