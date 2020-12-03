#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> count,sub_array1,sub_array2;
	std::vector<int> a;
	a.push_back(1);a.push_back(2);a.push_back(2);a.push_back(3);a.push_back(1);a.push_back(2);
	vector<int>::iterator itr;
	int n1,n2,n,i,j;
	for(i =0 ; i<a.size() - 1 ; i++)
	{
		for(j=1 ; j<a.size() ; j++)
		{
		
			sub_array1.push_back(a[i]);
			sub_array2.push_back(a[i]);
			if(a[i] - a[i+j] == 1 || a[i] - a[i+j] ==0)
				sub_array1.push_back(a[i+j]);
			else if (a[i] - a[i+j] == -1 || a[i] - a[i+j] == 0)
				sub_array2.push_back(a[i+j]);
			n1 = sub_array1.size();
			n2 = sub_array2.size();
			cout<<n1<<n2;
			if(n1 >n2)
				n = n1;
			else
				n = n2;
			
			count.push_back(n);
		}
		
	}
	
	cout<<*max_element(count.begin(),count.end());
}
