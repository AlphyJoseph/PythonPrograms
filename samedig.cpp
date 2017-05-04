#include <iostream>
using namespace std;

int main() {
	int t=0,T,L,R;
	cin>>T;
	while(t<T)
	{
	    cin>>L;
	    cin>>R;
	    for(int i=L;i<=R;i++)
	    {
	        if(i%11==0||i<10)
	            cout<<i<<"\t";
	    }
	    t++;
	}
	return 0;
}