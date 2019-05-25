#include <iostream>
//Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000
using namespace std;

long long selfpower_cut (int i)
{
    long long res=1;
    for (int k=1;k<=i;k++) {
        res=res*i;
        if(res>100000000000000) res=res%100000000000000;
    }
    return res;
}

int main()
{

    long long sum=0;
    for (int i=1;i<=1000;i++) {
        sum=sum + selfpower_cut(i);
    }
    cout << "Result is " << sum << endl;
    return 0;
}
