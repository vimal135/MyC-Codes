#include<bits/stdc++.h>
using namespace std;


int megaprime(int first, int second)
{

    bool prime[second+1];
    for (int i = 0;i<second+1;i++)
        prime[i] = true;

    for (int p=2;p<=second;p++)
        {
            if(prime[p])
            {
                for(int i=p*p;i<=second;i+=p)
                    prime[i] = false;
            }
        }
    int s =0;
    for(int i = first;i<=second;i++)
        {
            if(prime[i])
            {
                bool megaprime = true;
                int no = i;
                while(no>0)
                {
                    if (no % 10 != 2 && no % 10 != 3 && no % 10 != 5 && no % 10 != 7) 
                    {
					megaprime = false;
					break;
                    }

                    else
                    {
                        no = no/10;
                    }
                    
                }

                if(megaprime)
                    s+=i;
            }
        }
        return s;        
}

int main()
{
int first,second;
cin>>first>>second;
cout<<(megaprime(first,second));
return 0;
}