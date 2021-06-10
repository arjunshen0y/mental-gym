//Cyclically rotate an array by one

#include<iostream>
using namespace std;

void swap(int* a,int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void cyc1(int ar[],int n)
{
	swap(&ar[0],&ar[n-1]);//swaps first and last element of the array
	for(int i = 1; i < n-1 ; i++)
		swap(&ar[n-i],&ar[n-i-1]);//swaps the adjacent element starting from the end of array
	
}

void print_array(int ar[],int n)
{
	for(int i=0;i<n;i++)
		cout<<ar[i]<<"\t";
}

int main()
{
	int ar[20],n,temp,k;
	cout<< "enter the size of the array: \n";
	cin>>n;
	cout << "enter an array: \n";
	for(int i =0;i<n;i++)
	    cin >> ar[i];
	cyc1(ar,n);//for rotating further call this function again
	print_array(ar,n);
}
