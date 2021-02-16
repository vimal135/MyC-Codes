#include<bits/stdc++.h>
using namespace std;

int Job_sequencing(int [],int [], int );

int main()
{
    int deadline[] = {4,1,1,1};
    int profit[] = {70,80,30,100};
    cout<<Job_sequencing(deadline,profit,4)<<endl;

return 0;
}

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second> b.second);
}

int Job_sequencing(int deadline[], int profit[], int n)
{
    vector <pair<int,int>> res;
    for(int i = 0; i< n ;i++)
        res.push_back(make_pair(deadline[i],profit[i]));
    sort(res.begin(),res.end(),sortbysec);    
    int sum = res[0].second;
    int slot = res[0].first;
    for(int i =1 ; i< n;i++)
    {
        if (slot<res[i].first)
        {
            sum+=res[i].second;
            slot = res[i].first;
        }
    }
    return sum;
}