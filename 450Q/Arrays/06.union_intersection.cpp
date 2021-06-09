//Union and Intersection of 2 sorted arrays

#include<iostream>
#include<vector>
using namespace std;

void u_nion(int ar1[],int ar2[],int n1,int n2)
{
	int i =0,j=0;
	while(i<n1 && j<n2)
	{
		if(ar1[i] < ar2[j])
		{
			cout<<ar1[i];
			i++;
		}
		else if(ar1[i] > ar2[j])
		{
			cout<<ar2[j];
			j++;
		}
		else
		{
			cout<<ar1[i];
			i++;
			j++;
		}
			
		
	}
	//loops to print the rest of the elements of the array which was not exhausted
	
	while(i< n1) 
	{
		cout<<ar1[i]<<" ";
		i++;
	}
	
	while(j<n2)
	{
		cout<<ar2[j]<<" ";
		j++;
	}
}


void intersection(int ar1[],int ar2[],int n1,int n2)
{
	int i =0, j =0;
	while(i<n1 && j<n2)
	{
		if(ar1[i] < ar2[j])
			i++;
		else if(ar1[i] > ar2[j])
			j++;
		else
		{
			cout<<ar2[j]<<" ";
			i++;
			j++;
		}
	}
}




int main()
{
	int ar1[20],ar2[10];
	vector<int> u,i;
	int n1,n2;
	cout<< "enter the size of the sorted array 1 : \n";
	cin>>n1;
	cout<<"enter the size of the sorted array 2: \n";
	cin>>n2;
	cout << "enter the first array: \n";
	for(int i =0;i<n1;i++)
	    cin >> ar1[i];
	cout<<"enter the second array: \n";
	for(int i=0;i,n2;i++)
		cin>> ar2[i];
	u_nion(ar1,ar2,n1,n2);
	intersection(ar1,ar2,n1,n2);
	
}
