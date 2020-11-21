//Byteland (20/11/20)- Arjun K Shenoy

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i,t;
	long long sum,n;
	vector<int> v;
	
	i=0;
	 while(i<10)
	{   	 
		cin>>n;
		t = n/2 + n/3 + n/4;
		 if(t > n)
		        sum = t;
		 else
		        sum =n;
		 v.push_back(sum);
		 i++;
	}
	
	    
	
	for(vector<int>::iterator itr = v.begin(); itr<v.end(); itr++)
	{
	    cout<<*itr<<endl;
	}
}
