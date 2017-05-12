/* return yes if substring exists in string if not return how many characters it matches
Eg: abcdefg & def return yes
abcddegh & def return 2
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int check(char[],char[],int,int);
int main() {
  char str[100],sub[50];
  int t,n,m,val;
  cout<<"Enter no of test cases"<<endl;
  cin>>t;
  
  char *pch;
  while(t--)
  {
  cout<<"Enter length of string and substring"<<endl;
  cin>>n>>m;
  cout<<"Enter string and substring"<<endl;
  cin>>str>>sub;
  pch=strstr(str,sub);
  if(pch!=NULL)
    cout<<"YES"<<endl;
  else
  	{
  		val=check(str,sub,0,0);
    	cout<<val;
  	}
  
  }
  return 0;
}
int check(char string[100],char pattern[50],int k,int l)
{
    if(string[k]=='\0')
        return l;
    else if(string[k]==pattern[l])
    {
        check(string,pattern,k+1,l+1);
    }
    else
        check(string,pattern,k+1,l);
        
}
