//3.Largest Prime Factor - Arjun K Shenoy

#include<iostream>
#include<cmath>
using namespace std;

void primeFactors(long n)  
{  
    
    while (n % 2 == 0)  
    {  
        cout << 2 << " ";  
        n = n/2;  
    }  
  
    
    for (long i = 3; i <= sqrt(n); i = i + 2)  
    {  
        
        while (n % i == 0)  
        {  
        
            cout << i << " ";  
            
            n = n/i;  
        }  
        
    }  
  	
    
    if (n > 2)  
        cout << n << " "; 
	
}  
  

int main()  
{  
    long n;
	cout<<"enter the number: ";
	cin>>n;  
    primeFactors(n);  
    return 0;  
}  
