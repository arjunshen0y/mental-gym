//7.Prime Number - Arjun K Shenoy

#include<iostream>
using namespace std;

bool isPrime(int num)	//function definition
{
	for (int i = 2; i <= num/2; ++i)
    {
        if (num % i == 0)
        {								// function to check wheather passed number is prime
            return false;
        }
    }
    return true;
}

int main()
{
	int n,i,count=1;
	cout<<"enter number greater than 1 : ";	//recieves an interger n, to find the nth prime number
	cin>>n;
	for (int i = 3; ; i=i+2)
	{
		if (isPrime(i))
		{
			count++;
		}
		if (count==n)
		{
			cout<<i;
			return 0;
		}
	}
	
}
