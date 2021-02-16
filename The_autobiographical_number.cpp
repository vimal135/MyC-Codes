#include<bits/stdc++.h>
using namespace std;

bool solve(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        int count = 0;
        for(int j =0;j<n;j++)
        {
            if(i==arr[j])
                count++;
        }

        if (count!=arr[i])
            return false;
    }
    return true;

}

int main()
{
    int arr[] = {1,2,1,1};

    cout<<solve(arr,4)<<endl;

return 0;
}