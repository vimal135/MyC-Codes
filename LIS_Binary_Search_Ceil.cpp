#include<bits/stdc++.h>
using namespace std;

//int Ceil(vector<int>,int,int,int);
// The above line has created Overloading error
int LIS(int [],int);

int main()
{
    int arr[] = {3,4,2,8,10,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LIS(arr,n);
    return 0;
}

int Ceil(vector<int> &tail,int low, int high, int key)
{
    while(high>low)
    {
        int mid = low + (high-low)/2;
        if (tail[mid]>=key)
            high = mid;
        else
        {
            low = mid + 1;  
        }

            

    }
    return high;
}

int LIS(int arr[],int n)
{
    vector<int> tail;
    tail.push_back(arr[0]);
    int len = 1;
    for(int i =1; i < n; i++)
        {
            if(arr[i]>tail[len-1])
                {
                    tail.push_back(arr[i]);
                    len++;
                }
            else
            {
                int key = arr[i];
                int c = Ceil(tail,0,len-1,key);
                tail[c] = arr[i];
            }
                
        }
        return len;



}