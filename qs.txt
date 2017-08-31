#include<iostream>
using namespace std;
int partition(int a[],int start,int end)
{
	int pIndex = start,temp,temp2;
	int pivot = a[end];
	for( int i = start; i <= end-1;i++)
	{
		if(a[i]<=pivot)
		{
			temp = a[i];
			a[i] = a[pIndex];
			a[pIndex] = temp;
			//swap(a[i],a[pIndex]);
			pIndex++;
		}
	}
	temp2 = a[pIndex];
	a[pIndex] = a[end];
	a[end] = temp2;
	return pIndex;
}
void quicksort(int a[],int start,int end)
{
	int pIndex;
	if(start < end)
	{
		pIndex = partition(a,start,end);
		quicksort(a,0,pIndex-1);
		quicksort(a,pIndex+1,end);
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
	quicksort(array,0,n-1);
	cout<<"Array after sorting"<<endl;
	for(int i = 0; i < n; i++)
		cout<<array[i]<<" ";
	return 0;
}