//to find max sum of a contiguous sub array
#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the size of array"<<endl;
	int n,a[100];
	cin>>n;
	cout<<"Enter array"<<endl;
	for(int i=0; i < n;i++)
		cin>>a[i];
	int max_so_far=0,max_end=0;
	for(int i=0;i < n;i++)
	{
		max_end = a[i]+max_end;
		if(max_end < 0)
			max_so_far = 0;
		if(max_so_far < max_end)
			max_so_far = max_end;
	}
	cout<<max_so_far;
}