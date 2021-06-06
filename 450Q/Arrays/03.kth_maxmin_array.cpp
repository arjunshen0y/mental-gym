//03.kth max and min element of an array

#include <bits/stdc++.h>
using namespace std;

void swap(int* a,int* b) //function for swapping
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int ar[],int n)  //function for bubble sort
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(ar[j] > ar[j+1])
			{
				swap(&ar[j],&ar[j+1]);
			}
		}
	}
}

int main()
{
	int ar[20],n,temp,k;
	cout<< "enter the size of the array: \n";
	cin>>n;
	cout << "enter an array: \n";
	for(int i =0;i<n;i++)
	    std::cin >> ar[i];
	cout<<"enter a number 'k' which is <= n :";
	cin>>k;	    
	bubble_sort(ar,n);
	cout<<ar[k-1]<<" is kth minimum element \n"<<ar[n-k]<<" is the kth maximum element";
	return 0;	    
}
