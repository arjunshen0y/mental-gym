//Largest sum contiguos sub-array

#include<iostream>
//Brute force method has a time complexity of O(n^2)

int kadane(int ar[],int n) //Kadane's algo having time complexity O(n)
{
	int max_current, max_global,i; // max_current is max sum upto current element and max_global is max sum before the current element
	max_current = max_global = ar[0]; // the first element of the array is set as current max and global max
	for(i=1;i<n-1;i++)
	{
		max_current = std::max(ar[i],ar[i] + max_current); // maximum of (current element vs sum of current element and max_current) [negative elements are expected]
		if(max_current > max_global) //if current maximun greater than previous maximum
			max_global = max_current; //current max is the new global max
	}
	return max_global; // at the end the max sum is returned
}

int main()
{
	int ar[20],n,temp,k;
	std::cout<< "enter the size of the array: \n";
	std::cin>>n;
	std::cout << "enter an array: \n";
	for(int i =0;i<n;i++)
	    std::cin >> ar[i];
	int sum = kadane(ar,n);
	std::cout<<"\n"<<"Sum is : "<<sum;
}
