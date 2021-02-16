#include<bits/stdc++.h>
using namespace std;

bool isPrime(int k)
{
    if (k<=1) return false;
    if(k<=3) return true;
    
    if(k%2==0 || k%3==0)
        return false;
    for(int i = 5; i*i<=k;i+=6)
    {
        if(k%i==0 || k%(i+2)==0)
            return false;
    }
    
    return true;
}

int exactly3Divisors(int N)
{
    int count = 0;
    for(int i = 0;i<=N;i++)
    {
      if (isPrime(sqrt(i)))
        {
            cout<<sqrt(i)<<" ";
            count++;
        }
    }
    return count;
}

int main()
{
    cout<<exactly3Divisors(6)<<endl;

return 0;
}