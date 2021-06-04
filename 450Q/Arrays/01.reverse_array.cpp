//01. Reversing an Array

#include <bits/stdc++.h>
using namespace std;

void revarray (int ar[], int n, int start, int end)
{
    
    while(start < end)
    {
        int temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;
        start++;
        end--;
    }
}

void print_array(int ar[],int n)
{
	for(int i=0;i<n;i++)
		cout<<ar[i]<<"\t";
}

int main()
{
	int ar[20],n,temp;
	std::cout<< "enter the size of the array: \n";
	std::cin>>n;
	std::cout << "enter an array or string: \n";
	for(int i =0;i<n;i++)
	    std::cin >> ar[i];
	revarray(ar,n,0,n-1);
	std::cout << "the reversed array: \n";
    print_array(ar,n);
	return 0;
	
}
