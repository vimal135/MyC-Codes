#include<bits/stdc++.h>
using namespace std;

 void help(int n, vector <int> &res)
    {
        int k = 0;
        while(n>0)
        {
            int rem =n%2;
            if(rem==1)
                k++;
            n = n/2;
        }
        
        res.push_back(k);
        
    }
vector<int> countBitsm(int num) 
    {
        vector <int> res;
        res.push_back(0);
        for(int i = 1;i<=num;i++)
        {
            help(i,res);
        }
        
        return res;
        
    }

vector<int> countBits(int num) 
    {
        vector<int> ret(num+1, 0);
        for (int i = 1; i <= num; ++i)
            ret[i] = ret[i&(i-1)] + 1;
        return ret;

        
        
    }

int main()
{
    vector<int> ret = countBits(5);
    for(int x:ret)
        cout<<x<<" ";
    cout<<endl;  

    vector<int> res =countBitsm(5);
    for(int x:res)
        cout<<x<<" ";
    cout<<endl;


return 0;
}