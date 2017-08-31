#include<iostream>
using namespace std;
void selection(int a[],int n)
{
	int min , start, temp;
	//min = a[0];
	for (int j = 0; j < n; ++j)
	{
		min_index = j;
		
		for(int i = j+1; i < n; i++)
		{
			
			if(a[i] < a[min_index])
			{
				min_index = i;
			}
		}
		temp = a[j];
		a[j] = a[min_index];
		a[min_index] = temp;
	}
}
int main()
{
	cout<<"Enter size of array"<<endl;
	int n;
	cin>>n;
	cout<<"Enter array to be sorted"<<endl;
	int array[100];
	for(int i = 0; i < n; i++)
		cin>>array[i];
	selection(array,n);
	cout<<"Array after sorting"<<endl;
	for(int i = 0; i < n; i++)
		cout<<array[i]<<" ";
	return 0;
}