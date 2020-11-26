//Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool add_upto (vector <int> arr,int k)
{	
	vector <int>::iterator itr; int j;
	for(itr = arr.begin(), j =0 ; j<arr.size()-1 && itr<arr.end()-1 ; itr++,j++)
	{
		for(int i=1;i<arr.size() - j;i++)
		{
			int sum = *itr + *(itr+i);
			if(sum == k)
				return true;
		}
	}
}
int main()
{
	
	int i,k,n,l;
	std ::vector <int> arr;
	cout<<"enter number k : ";
	cin>>k;
	cout<<"enter length of the list : ";
	cin>>l;
	cout<<"enter numbers of the list : "<<endl;
	vector<int>::iterator itr = arr.begin();

	i=0;
	while(i<l)
	{
		cin>>n;
		arr.insert(arr.begin() + i, n);
		i++;
	}
	sort(arr.begin(),arr.end());
	bool val = add_upto(arr,k);
	if(val)
		cout<<"TRUE";
	else
		cout<<"FALSE";
	return 0;
}
