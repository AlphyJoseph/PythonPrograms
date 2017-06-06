#include<iostream>
#include<stdlib.h>
using namespace std;
int j=0;
int n,k,q;
	int a[100000],temp[100000],op[100];
int main()
{
	
	cin>>n>>k>>q;
	for(int i1=0;i1<n;i1++)
	{
		cin>>a[i1];
	}
	int i=n-k;
	while(k--)
	{
		temp[j]=a[i];
		++i;
		++j;
	}
	int m=0;
	for(int l=j;l<n;l++)
	{
		temp[l]=a[m];
		m++;
	}
	for(int x=0;x<q;x++)
	{
		cin>>op[x];
		cout<<temp[op[x]];
	}
}