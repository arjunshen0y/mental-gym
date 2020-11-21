//Factorial Trailing Zeroes

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
 {
	
	int n,z,t,i;
	vector<int> v;
	cin>>t;
	
	while(t) 
	{
		t--;
		z=0;
	    cin>>n;
		int j =1;
		while( n!=0 )
		{	
			int pro = n/pow(5,j);
			int x = floor(pro);
			if( x!=0 )
			{
				z += x;
				j++;
			}
			else
				break;
				
		} 
		v.push_back(z);	
		
	}
	for( vector<int>::iterator itr = v.begin(); itr<v.end(); itr++ )
	{
	
		cout<<*itr<<"\n";
	}
	return 0;
}

