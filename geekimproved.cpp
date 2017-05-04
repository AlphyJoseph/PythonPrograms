//r an amount of N they will fill Geek's cup with N units of cold coffee, the offer doesn't over yet. After consuming initial N units of coffee the shopkeeper will again refill his cup with half the amount of coffee that Geek consumed in previous refill, and will keep on refilling his cup till the amount to refill becomes nil i.e. 0 (Assume Geek can consume infinite amount of coffee and shop also has infinite amount coffee). Now Geek is curious to know that how many units of coffee will Geek get for Mth refill. Being Geek's friend help him out with his problem.    
//
#include <iostream>
using namespace std;

int main() 
{
	int T,N,M;
	cin>>T;
	while(T--)
	{
		cin>>N;
		cin>>M;
		res=N*pow(0.5,M-1);
		cout<<res<<endl;
	}
}
/*Input:
2
100 4
10 3

Output:
12
2

Explanation:
TestCase 1:
For the 4th refill geek will get 12 units of the coffee.
1st Fill: Geek will get 100 units of Coffee
2nd Fill: 100/2 = 50 units
3rd Fill: 50/2 = 25 units
4th Fill: 25/2 = 12 units*/