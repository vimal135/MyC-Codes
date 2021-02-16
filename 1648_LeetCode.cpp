#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& inventory, int orders) 
    {
        int res = 0;
        priority_queue <unsigned long long int> p;
        for(int i = 0; i<inventory.size();i++)
            p.push(inventory[i]);
        
        while(orders>=0)
        {
            int curr = p.top()%1000000007;
            res+=curr;
            res%=1000000007;
            p.pop();
            p.push(curr-1);
            orders--;
        }
        
        return res;
        
    }

int main()
{
    vector <int> v = {2,8,4,10,6};
    vector <int> v2 = {1000000000};
    int order2 = 1000000000;
    int order = 20;
    cout<<maxProfit(v,20)<<endl;
    cout<<maxProfit(v2,order2)<<endl;

return 0;
}