//8.Product of Adjacent Digits - Arjun K Shenoy

#include<iostream>
using namespace std;

int product_of_n_digit(unsigned long long num, int dig)	
{	
	int pro = 1,count=1;
	while(count<=dig && num!=0)							//function that takes two arguments, number and digit respectively and returns the product of digits 
	{
		pro = pro * (num%10);
		num = num/10;
		count++;
		
	}
	return pro;
}

int main()
{
	int i,j,val,dig;
	unsigned long max;
	unsigned long long n;
	cout<<"Enter the number : \n";
	cin>>n;											//recieves the number and digit
	cout<<"Number of adjacent digits: \n";
	cin>>dig;
	max = product_of_n_digit(n,dig);
	
	for (i = n/10;i>0;i = i/10)
	{
		val = product_of_n_digit(i,dig);
		if (val>max)						
		{
			max = val;
		}
		
	}
	cout<<"\n"<<max;
	 
	return 0;
}
