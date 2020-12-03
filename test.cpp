#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	
		vector <int> arr;
		arr.push_back(2);
		arr.push_back(1);arr.push_back(2);arr.push_back(4);arr.push_back(3);arr.push_back(2);arr.push_back(4);arr.push_back(3);
	
		int i,n,pos,c;
		vector <int>::iterator itr;
		vector <int> count;
		n = arr.size();
		sort(arr.begin(),arr.end());
		for(itr = arr.begin();itr < arr.end();itr++)
		{
		    int value = arr[i];
		    c = count(arr.begin(),arr.end(),value);
		    count.push_back(c);
		}
		pos = max_element(count.begin(),count.end());
		int val =arr[pos];
		cout<<val;
		return 0;
		
}
