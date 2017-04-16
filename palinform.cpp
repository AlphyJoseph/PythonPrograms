//forms a palindrome of high precedence from the given string by replacing the '.'
#include<iostream>
#include<string.h>
void pailnform(char str[])
{
	int n=strlen(str);
	for(int i=0;i<=n/2;i++)
	{
		if((str[i]!=str[n-i-1])&&(str[i]!='.'&&str[n-i-1]!='.'))
			cout<<"Not a palindrome"<<endl;
		exit(1);
	}
	for(int i=0;i<n;i++)
	{
		if(str[i]=='.')
		{
			if(str[n-i-1]=='.')
				str[n-i-1]=str[i]='a';
			else
				str[i]=str[n-i-1];
		}
	}
	cout<<str<<endl;
}
int main()
{
	clrscr();
	pailnform("ab..c.e.a");
	return 0;
}