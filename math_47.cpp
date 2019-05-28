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
//this function return number of prime factors
int factors (int a)
{
    int amount = 0;
    if (isprime(a)) return 1;
    if (a%2==0)
    {
        amount = 1;
        a = a/2;
    }
    for (int i=3;i<=a;i=i+2) {
        if(isprime(i) && a%i==0)
        {amount++;
            a=a/i;}
    }
    return amount;
}

int main()
{
    for (int i=1;i<=10000000;i++) {
        if(factors(i)==4 && factors(i+1)==4 && factors(i+2)==4 && factors(i+3)==4)
        {
            cout << i << " and " << i+1 << " and " << i+2 << " and " << i+3 << endl;
            break;
        }
    }
    return 0;
}
