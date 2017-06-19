/*given 2 arrays find the minimum sum of 2 nos from each array such that both these numbers don't have the same index position
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout<<"size"<<endl;
    cin >> n;
    int ar1[100000];
    cout<<"array 1"<<endl;
    for(int ar1_i = 0; ar1_i < n; ar1_i++){
       cin >> ar1[ar1_i];
    }
    int ar2[100000];
    cout<<"arra 2"<<endl;
    for(int ar2_i = 0; ar2_i < n; ar2_i++){
       cin >> ar2[ar2_i];
    }
    int sum=0,min_sum=ar1[0]+ar2[1];
    cout<<"minimum sum=";
    for(int i=0;i<n;i++)
        {
            //cout<<"i loop"<<endl;
        for(int j=0;j<n;j++)
            {
                //cout<<"j loop"<<endl;
            if(i!=j)
                {
                    //cout<<"first if"<<endl;
                sum=ar1[i]+ar2[j];
                if(sum<min_sum)
                    {
                        //cout<<"last"<<endl;
                    min_sum=sum;
                }
            }
        }
    }
    
    cout << min_sum << endl;
    return 0;
}
Find the minimum value and second minimum value along with their indexes from both the arrays. 
Now check if indexes of minimum values from both the arrays is not same then the sum of those minimum values is the answer. 
Otherwise, the answer will be minimum of the sum of the minimum value from the first array and second minimum value from the
 second array and the sum of the second minimum value from the first array and minimum value from the second array.
*/
#include<bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main() {
    int i, n;
    cin >> n;
    int ar1[n], ar2[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ar1[i]);
    }
    for(i = 0; i < n; i++) {
        scanf("%d", &ar2[i]);
    }
    int min1 = INF;
    int secondMin1 = INF; 
    int min2 = INF;
    int secondMin2 = INF;
    int minIndex1 = 0;
    int minIndex2 = 0;
    for(i = 0; i < n; i++) {
        if(ar1[i] < min1) {
            secondMin1 = min1;
            min1 = ar1[i];
            minIndex1 = i; 
        } else{ 
              if(ar1[i] < secondMin1) {
              secondMin1 = ar1[i];
              }
          }
    }
    for(i = 0; i < n; i++) {
        if(ar2[i] < min2) {
            secondMin2 = min2;
            min2 = ar2[i];
            minIndex2 = i; 
        } else{ 
              if(ar2[i] < secondMin2) {
                  secondMin2 = ar2[i];
              }
          }
    }
    int ans;
    if(minIndex1 != minIndex2) {
        ans = min1 + min2; 
    } else {
        ans = min(min1 + secondMin2, secondMin1 + min2);
    }
    printf("%d\n", ans);
    return 0; 
}