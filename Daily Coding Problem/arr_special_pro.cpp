//Given an array of integers, return a new array such that each element at index i 
//of the new array is the product of all the numbers in the original array except the one at i.
//(27-11-2020) - Arjun K Shenoy

#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int product(vector<int> arr,vector<int>::iterator itr )
{
	int pro = accumulate(arr.begin(),arr.end(),1,multiplies<int>());
	pro =pro/ (*itr);
	return pro;
}

int main()
{
	vector<int> arr;
	vector<int> res;
	int l,i,n;
	cout<<"enter length of the list : ";
	cin>>l;
	cout<<"Enter elements now : "<<endl;
	i=0;
	while(i<l)
	{
		cin>>n;
		arr.insert(arr.begin() + i, n);
		i++;
	}
	vector<int>:: iterator itr;
	for(itr =  arr.begin(); itr < arr.end(); itr++)
	{
		int val = product(arr,itr);
		res.push_back(val);
	}
	for(i=0;i<l;i++)
		cout<<res[i]<<"\t";
	return 0;
	
}
