#include <iostream>
using namespace std;



int main(int argc, char** argv) {
	int N,sum =0;
	for(N=1;N<1000;N++){
	
	if((N%3==0)&&(N%5==0))
	{
		sum+=N;
		continue;
	}
	if(N%3==0){
		sum+=N;
	}
	if(N%5==0){
		sum+=N;
	}
	}
	cout<<"The Sum of Numbers below 1k that are multiples of 3 or 5 are "<<sum;
	return 0;

}
