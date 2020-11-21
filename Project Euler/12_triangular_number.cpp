//12.Triangular Number - Arjun K Shenoy (17/Nov/20)

#include<iostream>
using namespace std;

bool tri_no(long n)  	//function that checks wheather a passed number is triangular
{	
	long sum=0,i;
	for(i=1;;i++)
	{
		sum = sum +i;
		if(n=sum || n<sum)
		{
			
			return true;
		}
	}
	return false;
	
}

int factor_count(long n)
{		
	int count = 2;
		for(int i =2;i<=n/2;i++)
			{
				if(n%i == 0)
				{
					count++;
				}
				
			}	
									//function that counts the factor
	return count;
}

int main()
{
	for(long i =1;i<1000000000;i++)
	{
	
		if(tri_no(i))
		{
			if(factor_count(i)==500)
				cout<<i;
		}
		
	}
	return 0;
	
	
}
