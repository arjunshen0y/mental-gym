//9.Pythagorean Triplet - Arjun K Shenoy

#include<iostream>
#include<cmath>
using namespace std;

bool pythagorean_triplet(int a, int b, int c)
{
	if( pow(a,2) + pow(b,2) == pow(c,2) )		//Function to check wheather the passed 3 numbers are a pythagorean triplet.
	{
		return true;
	}
}

int main()
{	
	int i,j,k;
	for( i=1;i<333;i++ )
		for( j=1;j<333;j++ )
			for( k=1;k<333;k++ )
				{
					if( pythagorean_triplet(i,j,k) )
					{
						if( i+j+k == 1000)
						{
							int pro = i*j*k;
							cout<<pro;
							goto jump;
						}
					}
				
				}
		
	
jump:	
	return 0;
}
