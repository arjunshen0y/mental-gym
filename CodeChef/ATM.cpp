//(18/Nov/20) - Arjun K Shenoy

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int mon;
	float bal;
	cin>>mon>>bal;
	if(0<mon<=2000 && 0<bal<=2000.00)
	{
		if( (float(mon)+0.5)<bal || mon%5 !=0 )
		{
			
			cout<<setprecision(2)<<fixed;
			cout<<bal;
		}
		else
		{
			bal = (bal- mon) - 0.50;
			cout<<setprecision(2)<<fixed;
			cout<<bal;
		}
	}
	return 0;
}
