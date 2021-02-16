#include<bits/stdc++.h>
using namespace std;

bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int> stack;
        int i = 0;
        for (int x : pushed) {
            stack.push(x);
        
        cout<<stack.top()<<endl;    
            while (stack.size() && stack.top() == popped[i]) 
            {
                //cout<<i<<" "<<popped[i]<<" "<<stack.top()<<" "<<endl;
                stack.pop();
                i++;
            }
        }
        return stack.size() == 0;
    }

int main()
{
    vector <int> pushed = {1,2,3,4,5};
    vector <int> popped = {4,5,3,2,1};
    cout<<validateStackSequences(pushed,popped)<<endl;

return 0;
}


