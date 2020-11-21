//10.Sum or Primes - Arjun K Shenoy

#include<iostream>
using namespace std;

bool isPrime(int n)
{	
	for( unsigned long long i=3 ; i<n/2 ; i+=2 )
	{
		if(n%i==0)
											//function to check wheather a passed number is prime
			return false;
	}
	return true;
}

int sum_of_primes(unsigned long long n)
{
	unsigned long long sum =2;
	for( long long i =3 ; i<n ; i+=2)
	{										//function that gives sum of primes
		if(isPrime(i))
			sum+=i;
	}
	return sum;
}

int main()
{
	unsigned long long n;
	cout<<"Enter the number greater than 2 : ";
	cin>>n;
	unsigned long long sum = sum_of_primes(n);
	cout<<"Sum is "<<sum;
	return 0;
}
