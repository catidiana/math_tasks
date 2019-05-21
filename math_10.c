#include <stdio.h>
//Find the sum of all the primes below two million

//this function test if number is prime. It returns 1 if it's prime
int isprime (int num)
{
  if (num == 1) return 0;
  if (num == 2) return 1;

  for (int i = 2; i < num; i++)
    {
      if (num % i == 0) return 0;
    }

  return 1;
}

int main()
{
    long long sum=2;
    for (int i=3;i<2000000;i=i+2) {
        if(isprime(i))
        {sum=sum+i;}
    }
    printf("Result is %lli\n", sum);
    return 0;
}
