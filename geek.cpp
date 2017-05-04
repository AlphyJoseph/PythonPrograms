#include <iostream>
using namespace std;

int main() 
{
	int T,N,M,m;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cin>>M;
	    m=1;
	    while(N>0)
	    {
	        if(M==m)
	            cout<<N;
	       N=N/2;
	       m++;
	    }
	}
	return 0;
}