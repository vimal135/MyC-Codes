#include<bits/stdc++.h>
using namespace std;

int charity(int input1)
{
    return (input1*(input1+1)*(2*input1 +1))/6;
}

int main()
{
int n = 5;
cout<<charity(n);
return 0;
}