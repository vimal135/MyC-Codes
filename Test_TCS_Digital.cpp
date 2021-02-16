 #include<bits/stdc++.h>
 using namespace std; 
  

void find(int n) 
{ 
    int i, j = 0; 
      
   
    int result[50];  
  
     
    if (n < 10) 
    { 
        cout<<(n + 10); 
        return; 
    } 
  
    
    for (i = 9; i > 1; i--) 
    { 
       
        while (n % i == 0) 
        { 
            n = n / i; 
            result[j] = i; 
            j++; 
        } 
    } 
  
  
    if (n > 10) 
    { 
        cout << "Not Possible"<<endl;; 
        return; 
    } 
  
   
    for (i = j - 1; i >= 0; i--) 
        cout << result[i]; 
} 
  
int main() 
{ 
    int a;
    cin>>a;
    find(a);
    cout<<endl; 
    return 0; 
}