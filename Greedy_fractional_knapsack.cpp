#include<bits/stdc++.h>
using namespace std;

int fractional_knapsack(int [], int [], int,int);



int main()
{
    int weight[] = {50,20,30};
    int value[] = {600,500,400};
    int capacity = 70;
    cout<<fractional_knapsack(weight,value,3,capacity)<<endl;    

return 0;
}

bool sortbyratio(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second/a.first)>(b.second/b.first);
}

int fractional_knapsack(int weight[], int value[], int n , int capacity)
{
    vector <pair<int,int>> res;
    for(int i = 0; i < 3;i++)
        res.push_back(make_pair(weight[i],value[i]));
    sort(res.begin(),res.end(),sortbyratio);
    for(int i = 0;i<n;i++)
        cout<<res[i].first<<" "<<res[i].second<<endl;
    int sum = 0;
    for(int i = 0; i<n;i++)
    {
        if(res[i].first<capacity)
        {
            capacity-=res[i].first;
            sum+=res[i].second;
            cout<<sum<<" "<<capacity<<endl;
        }
        else
        {
            sum+=((res[i].second)*((float)capacity/(float)res[i].first));
            return sum;
        }
        
    }
    return sum;


}