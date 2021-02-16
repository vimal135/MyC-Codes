#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int i = 0, j =0;
    while(i<m && j<n)
    {
        if (a[i]<b[j])
            cout<<a[i++]<<endl;
        else
            cout<<b[j++]<<endl; 
    }
    while (i<m)
        cout<<a[i++]<<endl;
    while(j<n)
        cout<<b[j++]<<endl;    

}

int main()
{
int a[] = {10,15,20,40};
int m = sizeof(a)/sizeof(a[0]);
int b[] = {5,6,6,10,20,60};
int n = sizeof(b)/sizeof(b[0]);
merge(a,b,m,n);

return 0;
}