#include<bits/stdc++.h>
using namespace std;

void Sieve(int);

int main()
{
    int n;
    cin>>n;
    Sieve(n);
    return 0;
}

void Sieve(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int p = 2;p<=n;p++)
        {
            if (prime[p])
                {
                    for (int i= p*p;i<=n;i+=p)
                        prime[i] = false;
                }

        }
    for(int p = 2;p<=n;p++)
        {
        if(prime[p])
            cout<<p<<endl;
        }    
            
}
