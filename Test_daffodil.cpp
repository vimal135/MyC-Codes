#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n, int i = 2) 
{ 
	// Base cases 
	if (n <= 2) 
		return (n == 2) ? true : false; 
	if (n % i == 0)
    {
        cout<<i<<" ";
        return false; 
    } 
		
	if (i * i > n)
    {
        //cout<<i<<" ";
        return true; 
    } 
		

	// Check for next divisor 
	return isPrime(n, i + 1); 
} 



int main()
{
    cout<<isPrime(17);

return 0;
}