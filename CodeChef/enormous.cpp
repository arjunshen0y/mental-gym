//Enormous Input Test (19/11/20) - Arjun K Shenoy

#include<iostream>
using namespace std;

int main()
{
	int n,k,num,i,count =0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>num;
		if(num%k==0)
			count++;
	}
	cout<<count;
}
