#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
//#include<process.h>
void uniqueChar(char str[200])
{
	int char_set[128];
	if (strlen(str)>128)
	{
		cout<<"Characters are not unique"<<endl;
		exit(1);
	}
	for(int i=0;i<strlen(str);i++)
	{
		int val=str[i];
		if(char_set[val])
		{	cout<<"Characters are not unique"<<endl;
			exit(1);
		}
		char_set[val]=1;
	}
	cout<<"All Characters in the string are unique"<<endl;
}
int main()
{
	cout<<"Enter String"<<endl;
	char str1[200];
	cin>>str1;
	uniqueChar(str1);
	return 0;

}