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
        for(int j=0;j<n;j++)
            {
            if(i!=j)
                {
                sum=ar1[i]+ar2[j];
                if(sum<min_sum)
                    {
                    sum=min_sum;
                }
            }
        }
    }
    
    cout << min_sum << endl;
    return 0;
}