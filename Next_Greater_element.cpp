#include<bits/stdc++.h>
using namespace std;
/*
vector <long long> nextLargerElement(long long arr[], int n)
{
    stack <long long> s;
    vector <long long> res(n,-1);
    s.push(arr[0]);
    int j = 0;
    for (int i = 1;i<n;i++)
    {
        if(s.empty())
        {
            s.push(arr[i]);
            continue;
        }    
        while(s.empty()==false )
        {
        if (s.top()<arr[i])
        {
            res[j] = arr[i];
            s.pop();
        }
        j++;
        }
        s.push(arr[i]);
        
            
    }
    
    
    return res;
    }
    */    
vector <long long> nextLargerElement(long long arr[], int n)
{
    stack<long long> s; 
  
    vector<long long> arr1(n,0); 
  
    // iterating from n-1 to 0 
    for (int i = n - 1; i >= 0; i--)  
    { 
        /*We will pop till we get the  
        greater element on top or stack gets empty*/
        while (!s.empty() && s.top() <= arr[i]) 
            s.pop(); 
  
        /*if stack gots empty means there  
        is no element on right which is greater  
        than the current element. 
        if not empty then the next greater  
        element is on top of stack*/
        if (s.empty())  
            arr1[i] = -1;          
        else 
            arr1[i] = s.top();         
  
        s.push(arr[i]); 
    } 
  
    //for (int i = 0; i < n; i++) 
    //    cout << arr[i] << " ---> " << arr1[i] << endl;
    return arr1;
}

int main()
{
    long long arr[] = {1,3,2,4};
    vector <long long> res = nextLargerElement(arr,4);
    for(int i =0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }

return 0;
}