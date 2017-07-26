/* add k to each character of string if character is z and k is 2 then next character should be b, n is the length of string */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	  int n,val;
    cin >> n;
    char s[100],s1[100];
    cin >> s;
    int k;
    cin >> k;
    for(int i=0; i < n; i++)
    {
        if(isalpha(s[i]))
        {
            s1[i] = s[i] + k;
            val = s1[i];
            if(val > 122 && islower(s[i]))
            {
                s1[i] = (s1[i] - 122) + 96;
            }
            else if(val > 90 && isupper(s[i]))
            {
                s1[i] = (s1[i] - 90) + 64;
            }
        }
        else
        	s1[i] = s[i];
    }
    s[n-1] = '\0';
    cout<<s1;
    return 0;
}