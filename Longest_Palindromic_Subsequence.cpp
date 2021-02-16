/*
// Every single character is a palindrome of length 1
L(i, i) = 1 for all indexes i in given sequence

// IF first and last characters are not same
If (X[i] != X[j])  L(i, j) =  max{L(i + 1, j),L(i, j - 1)} 

// If there are only 2 characters and both are same
Else if (j == i + 1) L(i, j) = 2  

// If there are more than two characters, and first and last 
// characters are same
Else L(i, j) =  L(i + 1, j - 1) + 2 
*/


#include<bits/stdc++.h>
using namespace std;

int LPS(string s, int i,int j)
{
    if(i==j)
        return 1;
    else if(s[i]==s[j]&&i+1==j)
        return 2;
    else if(s[i]==s[j])
        return 2 + LPS(s,i+1,j-1);
    else
    {
        return max(LPS(s,i+1,j),LPS(s,i,j-1));
    }
                
}

int main()
{
string s = "babcbab";
cout<<LPS(s,0,6)<<endl;
return 0;
}