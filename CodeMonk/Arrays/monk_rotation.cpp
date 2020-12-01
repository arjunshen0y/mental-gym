//Monk and Rotation - (30-11-2020) - Arjun K Shenoy

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,k,e,temp1,temp2;
	vector<int> arr;
	cin>>t;    //inputs number of test cases
	cin>>n>>k;		//recieves the size of array and steps of rotation
	
	vector<int>::iterator itr;
	//recieving array elements
	for(int i=0;i<n;i++)
	{	
		cin>>e;
		arr.push_back(e);
	}
	temp1=arr[0];
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			temp2 = arr[j+1];
			arr[j+1] = temp1;
			temp1 = temp2;
		}
		arr[0] = temp2;
	}
	//printing the final array
	for(itr =arr.begin();itr<arr.end();itr++)
		cout<<*itr<<"\t";
	return 0;
	
	
}
