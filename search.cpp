#include <iostream>
using namespace std;
int bs(int[],int,int);
int main() {
	int t,m,n,x,a[30][30],b[900],k=0;
	cin>>t;
	while(t--)
	{
	    cin>>m>>n;
	    for(int i=0;i<n;i++)
	        for(int j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	            b[k]=a[i][j];
	            k++;
	        }
	    cin>>x;
	    
	    
	   int res=bs(b,x,k);
	   cout<<res;
	}
}
	int bs(int b[],int x,int k)
	{
	    int low=0,high=k;
	    int mid=(low+high)/2;
	    while(low<high)
	    {
	        
	        if(b[mid]==x)
	            return 1;
	        else if(b[mid]<x)
	            low=mid+1;
	        else 
	            high=mid-1;
	    }
	    return 0;
	}

