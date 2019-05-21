#include <stdio.h>
#include <math.h>
//this function test if number is prime. It returns 1 if it's prime
int isprime (int num)
{
    if (num == 1 || num==0) return 0;
    if (num == 2) return 1;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0) return 0;
    }
}
int module(int a)
{
    int mod;
    if(a>=0) {
        mod=a;
    }
    else {
        mod=a*(-1);
    }
    return mod;
}

int main()
{
    int target_a=0;
    int target_b=0;
    int target_count=0;
    int a, b, count;
    for (a=-1000;a<=1000;a++) {
        for (b=2;b<=1000;b++) {
            if(isprime(b))
            {
            int n=0;
            while (isprime(n*n+a*n+b)) {
                n++;
            }
            count=n;
            if(count>target_count)
            {
                target_a=a;
                target_b=b;
                target_count=count;
            }
            }
        }
    }
    printf("With a equal to %d and b eguql to %d produce %d primes\n", target_a, target_b, target_count);
    return 0;
}
