#include<bits/stdc++.h>
using namespace std;

void partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    while(true)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j)
            break;
        swap(arr[i],arr[j]);    
        
    }
}

int main()
{
int arr[] = {40,80,30,90,10,50,70};
partition(arr,0,6);
for(int i:arr)
    cout<<i<<endl;
return 0;
}