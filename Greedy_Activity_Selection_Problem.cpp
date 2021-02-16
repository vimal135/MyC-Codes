#include<bits/stdc++.h>
using namespace std;


int Activity_Selection(int [],int [],int);

int main()
{
    int arr1[] = {2,1,5,6};
    int arr2[] = {3,4,8,10};
    int arr3[] = {1,2,3,10};
    int arr4[] = {3,4,8,11};
    int n = 4;
    cout<<Activity_Selection(arr1,arr2,n)<<endl;
    cout<<Activity_Selection(arr3,arr4,n)<<endl;

return 0;
}

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second< b.second);
}

int Activity_Selection(int arr1[],int arr2[],int n)
{
    vector <pair<int,int>> res;
    for(int i = 0; i < n; i++)
    {
        res.push_back(make_pair(arr1[i],arr2[i]));
    }

    sort(res.begin(),res.end(),sortbysec);
    int result = 1;
    int finish = res[0].second;
    for(int i = 1; i < n;i++)
    {
        if(finish<=res[i].first)
        {
            result++;
            finish = res[i].second;
        }
    }
    return result;
}