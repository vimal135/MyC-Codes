#include<bits/stdc++.h>
using namespace std;

 bool canJump(vector<int>& nums) 
    {
        int i = 0;
        int n = nums.size();
        int reach = 0;
        while(i<n && i<=reach)
        {
            reach = max(reach,i + nums[i]);
            i++;
        }
        return i==n;
        
    }

int main()
{

return 0;
}