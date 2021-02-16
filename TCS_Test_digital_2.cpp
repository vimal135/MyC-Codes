#include<bits/stdc++.h> 
using namespace std; 

 void equal(int arr[], int n)
 {
    if(n<2)
	{
	    cout<<"Invalid Input";
	}
	else if(n>=2)
	{
	    sort(arr,arr+n);
	    if(arr[0]==arr[1])
	    {cout<<"Equal";}
	    else{
	    cout<<arr[0]<<" "<<arr[1];}
	}
 }

int main() 
{ 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
    equal(arr,n);
	
	return 0; 
}

