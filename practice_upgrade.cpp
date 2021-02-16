// C++ program to make array elements  
// pairwise distinct by removing at most  
// one subarray of minimum length  
  
#include <bits/stdc++.h>  
using namespace std;  
  
// Function to check if elements of  
// Prefix and suffix of each sub array  
// of size K are pairwise distinct or not  
bool check(int a[], int n, int k)  
{  
    // Hash map to store frequencies of  
    // elements of prefix and suffix  
    map<int, int> m;  
  
    // Variable to store number of  
    // occurrences of an element other  
    // than one  
    int extra = 0;  
  
    // Adding frequency of elements of suffix  
    // to hash for subarray starting from first  
    // index  
    // There is no prefix for this sub array  
    for (int i = k; i < n; i++)  
        m[a[i]]++;  
  
    // Counting extra elements in current Hash  
    // map  
    for (auto x : m)  
        extra += x.second - 1;  
  
    // If there are no extra elements return  
    // true  
    if (extra == 0)  
        return true;  
  
    // Check for remaining sub arrays  
  
    for (int i = 1; i + k - 1 < n; i++) {  
  
        // First element of suffix is now  
        // part of subarray which is being  
        // removed so, check for extra elements  
        if (m[a[i + k - 1]] > 1)  
            extra--;  
  
        // Decrement frequency of first  
        // element of the suffix  
        m[a[i + k - 1]]--;  
  
        // Increment frequency of last  
        // element of the prefix  
        m[a[i - 1]]++;  
  
        // Check for extra elements  
        if (m[a[i - 1]] > 1)  
            extra++;  
  
        // If there are no extra elements  
        // return true  
        if (extra == 0)  
            return true;  
    }  
  
    return false;  
}  
  
// Function for calculating minimum  
// length of the subarray, which on  
// removing make all elements pairwise  
// distinct  
int minlength(int a[], int n)  
{  
    // Possible range of length of subarray  
    int lo = 0, hi = n;  
  
    int ans = 0;  
  
    // Binary search to find minimum ans  
    while (lo < hi) 
	{  
  
        int mid = (lo + hi) / 2;  
  
        if (check(a, n, mid)) 
		{  
            hi = mid+1;  
        }  
        else
			ans = mid-1;
            lo = mid-1;  
    }  
  
    return ans;  
}  
  
// Driver code  
int main()  
{  
    //int a[] = { 1, 1,4,2,2,4,3,4};
	int a[] = {7,14,0,9,4,18,18,2,4,5,5,1,7,1,11,15,2};  
  
    int n = sizeof(a) / sizeof(int);  
  
    cout << minlength(a, n);  
}