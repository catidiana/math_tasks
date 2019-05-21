#include <stdio.h>
#include <math.h>
//What is the largest prime factor of the number 600851475143

//this function test if number is prime. It returns 1 if it's prime
int isprime (int num)
{
    int result=0;
    if (num == 1)
    {
        result = 0;
    }
    else if (num == 2)
    {
        result = 1;
    }
    else
    {
        for (int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {result=0;
                break;}
            else {
                result=1;
            }
        }
    }
    return result;
}

int main()
{
    long long test = 600851475143;
    long long factor = 1;
    long long cycle=sqrt(test);
    for (long long i=2;i<=cycle;i++)
    {
        if(isprime(i))
        {
            if(test%i==0)
            {
                factor=i;
                test=test/i;
                cycle = test;
            }
        }
    }
    printf("Result is %lli\n", factor);
    return 0;
}
