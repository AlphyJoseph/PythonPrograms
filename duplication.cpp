#include <bits/stdc++.h>

using namespace std;


int main() {
    int q,i;
    char s_init[1000],t_sinit;
    s_init[0]='0';
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        cin >> x;
        while(strlen(s_init)!=4||s_init[]!='1')
       {
      // strcpy(s_exp,s_init);
       int n=strlen(s_init);
       for(i=0;i<n;i++)
       {
        if(s_init[i]=='0')
            t_sinit='1';
        else
            t_sinit='0';
        
        s_init[n+i]=t_sinit;
           
        }
       // strcpy(s_init,s_exp);
        }
        cout << s_init[x] << endl;
    }
    return 0;
}