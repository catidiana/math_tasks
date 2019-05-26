#include <iostream>
#include <cmath>

using namespace std;
//this function test if number is prime. It returns 1 if it's prime
int isprime (int num)
{
    if (num == 1) return 0;
    if (num == 2) return 1;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0) return 0;
    }
}
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
//this function test interesting property
int isinteresting (int a)
{
    int N=num_len(a);
    int prime_test;
    if (isprime(a)) prime_test=1;
    else return 0;
    int test1=a/10;
    while (test1>0) {
        if(isprime(test1)==0) return 0;
        test1=test1/10;
    }
    int test2=a;
    for (int i=N-1;i>0;i--) {
        int k=pow(10, i);
        test2=test2%k;
        if (isprime(test2)==0) return 0;
    }
    return prime_test;
}

int main()
{
    int i=0;
    int k=11;
    int sum=0;
    while (i<11) {
        if (isinteresting(k))
        {
            cout << "Interesting " << k << endl;
            sum=sum+k;
            i++;
        }
        k=k+2;
    }
    cout << "Sum is " << sum << endl;
    return 0;
}
