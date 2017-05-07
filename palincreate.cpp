/*ake the number palindromic by changing no more than k digits. Sandy can only change 1 digit at a time, and cannot add digits to (or remove digits from) the number.

Given and an n-digit number, help Sandy determine the largest possible number she can make by changing k digits.

Note: Treat the integers as numeric strings. Leading zeros are permitted and can't be ignored (So 0011 is not a palindrome, 0110 is a valid palindrome). A digit can be modified more than once.
8
Input Format

The first line contains two space-separated integers,n (the number of digits in the number) and k he maximum number of digits that can be altered), respectively.
The second line contains an n-digit string of numbers that Sandy must attempt to make palindromic.
Output Format

Print a single line with the largest number that can be made by changing no more than digits; if this is not possible, print -1.

Sample Input 0

4 1
3943

Sample Output 0

3993

Sample Input 1

6 3
092282

Sample Output 1

992299
*/

#include <bits/stdc++.h>
#include<assert.h>

using namespace std;

char ans[100005] = {'\0'};
bool mark[100005];

void solution() {

   memset(mark,0,sizeof(mark));
   int n, len, l, r, k;
   string str;

   cin>>n>>k;
   cin>>str;
   len = str.size();

   assert(n>0 && n<=100000);
   assert(k>=0 && k<=100000);
   assert(len>0 && len<=100000);

   //Making palindrome
   l=0; r=len-1;
   while(l<=r)
   {
	   assert(str[l]>='0' && str[l]<='9');
	   assert(str[r]>='0' && str[r]<='9');

	   if(l==r)
	   {
		   ans[l] = str[l];
		   break;
	   }
	   if(str[l] == str[r])
	   {
		   ans[l] = str[l];
		   ans[r] = str[r];
	   }
	   else
	   {
		   if(str[l]>= str[r])
		   {
			   mark[r] = 1;
			   k--;
			   ans[l] = ans[r] = str[l];
		   }
		   else
		   {
			   mark[l] = 1;
			   k--;
			   ans[l] = ans[r] = str[r];
		   }
	   }
	   l++;
	   r--;
   }

   if(k<0)
   {
	   printf("-1\n");
	   return;
   }

   //Maximizing number
   l=0; r=len-1;
   while(l<=r)
   {
	   if(l==r)
	   {
		   if(ans[l]<'9' && k>=1)
			ans[l] = '9';
		   break;
	   }
	   if(ans[l]<'9')
	   {
		   if(mark[l] == 0 && mark[r] == 0 && k>=2) //not touch before
		   {
			   k-=2;
			   ans[l] = ans[r] = '9';
		   }
		   else if((mark[l]==1 || mark[r]==1) && k>=1)
		   {
			   k-=1;
			   ans[l] = ans[r] = '9';
		   }
	   }
	   l++;
	   r--;
   }
   ans[len] = '\0';
   printf("%s\n", ans);
}

int main () {

		solution();
	return 0;
}
