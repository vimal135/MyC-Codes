#include<bits/stdc++.h>
using namespace std;

int countSteps(int n) 
{ 
    int count = 0; 
    while (n > 1) { 
        count++; 
  
        // num even, divide by 2 
        if (n % 2 == 0) 
            n /= 2; 
  
        // num odd, n%4 == 1, decrement by 1 
        else if (n % 4 == 1) 
            n -= 1; 
  
        // num odd, n%4 == 3, increment by 1 
        else
            n += 1; 
    } 
  
    return count; 
} 

int reduce(int n)
{
    if (n==1)
        return 0;
    else if (n % 2 == 0) 
        return 1 + reduce(n / 2);
    else
    {
        return 1 + min(reduce(n+1),reduce(n-1));
    }
        
}

int main()
{
int n;
cin>>n;
cout<<reduce(n)<<endl;
cout<<countSteps(n);
return 0;
}