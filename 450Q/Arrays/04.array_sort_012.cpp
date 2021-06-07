//[Dutch National Flag Problem] sort array consisting only 0,1,2 (without any sorting algo)

#include<iostream>
using namespace std;
//Brute Force Method(traversing the array multiple times)
int count(int ar[],int k,int n)
{
	int c=0;
	for(int i =0 ; i<n ; i++)
	{
		if(ar[i] == k)
			c++;
	}
	return c;
		
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
	int i = 0;
	int c1 = count(ar,0,n);
	int c2 = count(ar,1,n);
	int c3 = count(ar,2,n);
	while(c1)
	{
		ar[i] = 0;
		i++; c1--;
	}
	while(c2)
	{
		ar[i] = 1;
		i++; c2--;
	}
	while(c3)
	{
		ar[i] = 2;
		i++;c3--;
	}
	
	
	print_array(ar,n);
}

//Single traversal solution

/*
void sort012(int ar[20],int n)
{
	int l,m,h; //low,mid and high index
	l = m = 0;
	h = n-1;
	while(m<=h)
	{
		if(ar[m] == 0)
		{
			swap(&ar[l],&ar[m]);
			l++;
			m++;
		}
		if(ar[m] == 1)
		{
			m++;
		}
		if(ar[m] == 2)
		{
			swap(&ar[m],&ar[h]);
			h--;
		}
			
		
	}
}
*/
