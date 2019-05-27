#include <iostream>
#include <cmath>
using namespace std;

//this function return the length of number
int num_len(int a)
{
    int len=0;
    while (a!=0) {
        a=a/10;
        len++;
    }
    return len;
}
// this function test if number is permutation of 1...9
int permutation (int a)
{
    if (a<123456789 || a>987654321) return 0;
    int c[9];
    for (int i=0;i<10;i++) {
        c[i]=i;
    }
    while (a>0) {
        int test = a%10;
        c[test]=0;
        a=a/10;
    }
    int sum=0;
    for (int i=0;i<10;i++) {
        sum=sum+c[i];
    }
    if (sum==0) return 1; else return 0;
}

int main()
{
    int max=0;
    int flag = 1;
    for (int i=1;i<10000;i++) {
        long long test=0;
        int j=1;
        while (1) {
            int k=i*j;
            int len=num_len(k);
            test=test*pow(10,len)+k;
            j++;
            if (test>=123456789) break;
        }
        if(permutation(test))
        {
            cout << "Number that gives permutation " << i << " is " << test << endl;
            if(test>max)
           { max=test;
            flag=i;}
        }
    }
    cout  << endl;
    cout << "Max permutation gives " << flag << " is " << max << endl;
    return 0;
}
