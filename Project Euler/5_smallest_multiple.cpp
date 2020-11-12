//5.Smallest number evenly divisible by 1 to N - Arjun K Shenoy

#include<iostream>
using namespace std;

int main()
{
	int n,i,j,flag,count=0;
	cout<<"enter the number";
	cin>>n;
	i=1;
	while(i!=0)
	{
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
			else
			{
			    
				break;
			}
		}
		i++;
	}


	if(count == n)
	{
		cout<<"/n"<<i;
	}
}


