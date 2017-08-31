#include <iostream>
using namespace std;

enum seasons { spring , summer=34 , autumn , winter };

int main() {

    seasons s;
    int leader[5]={1,2,3,4,5};
    int p = 4;
    cout<<leader[p>>1+1]<<endl;
    s = spring;
    cout<<sizeof(90)<<endl;
    cout << "Summer = " << s << endl;
    return 0;
}