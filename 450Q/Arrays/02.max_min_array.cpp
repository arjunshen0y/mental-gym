//02.Maximum and minimum element of an array.

#include <bits/stdc++.h>
using namespace std;

int minmax(int ar[],int n,int* add_max,int* add_min) //add_max and add_min are addresses of max and min respectively
{
	int max = ar[0]; 
	int min = ar[0];
	for(int i=1;i<n;i++)
	{
		if(max < ar[i])
			max = ar[i];
		if(min > ar[i])
			min = ar[i];
	}
	*add_max = max, *add_min = min; // an alternative of returning value from a func(by this method we are able to return multiple values from a function)
}



int main()
{
	int ar[20],n,max,min;
	std::cout<< "enter the size of the array: \n";
	std::cin>>n;
	std::cout << "enter an array: \n";
	for(int i =0;i<n;i++)
	    std::cin >> ar[i];
	minmax(ar,n,&max,&min);
	cout<<"Maximum element is :\n"<<max;
	cout<<"Minimum element is :"<<min;
	return 0;
}
