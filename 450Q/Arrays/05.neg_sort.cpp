//05.Move -ve elements to one side of the array

#include<iostream>
using namespace std;

void swap(int* a,int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void negsort(int ar[],int n)
{
	int p = 0,q = 0; //two pointers initially pointing to first element
	for(int i = 0; i< n; i++)
	{
		if(ar[p] < 0)
		{
			p++;q++;
		}
		else if ( ar[p] >= 0 && ar[q+1] < 0)
		{
			swap(&ar[p],&ar[q+1]); //swaps if the adjacent element are of opposite signs
			p++;
			q++;
		}
		else if ( ar[p] >= 0 && ar[q+1] >= 0)
			q++;
	}
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
	negsort(ar,n);
	print_array(ar,n);
	
	
}
