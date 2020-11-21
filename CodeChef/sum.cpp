//Add Two Numbers(19/Nov/20) - Arjun K Shenoy

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t,a,b,sum;
	vector<int> v;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;
		sum = a+b;
		v.push_back(sum);
		
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<"\n";
	return 0;
}
