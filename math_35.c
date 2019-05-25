#include <stdio.h>
#include <math.h>
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
int circular100(int a)
{
    int a1=100*(a%10)+a/10;
    int a2=100*(a1%10)+a1/10;
    if(isprime(a) && isprime(a1) && isprime(a2))
    {return 1;}
    else {return 0;}
}
int circular1000(int a)
{
    int a1=1000*(a%10)+a/10;
    int a2=1000*(a1%10)+a1/10;
    int a3=1000*(a2%10)+a2/10;
    if(isprime(a) && isprime(a1) && isprime(a2) && isprime(a3))
    {return 1;}
    else {return 0;}
}
int circular10000(int a)
{
    int a1=10000*(a%10)+a/10;
    int a2=10000*(a1%10)+a1/10;
    int a3=10000*(a2%10)+a2/10;
    int a4=10000*(a3%10)+a3/10;
    if(isprime(a) && isprime(a1) && isprime(a2) && isprime(a3) && isprime(a4))
    {return 1;}
    else {return 0;}
}
int circular100000(int a)
{
    int a1=100000*(a%10)+a/10;
    int a2=100000*(a1%10)+a1/10;
    int a3=100000*(a2%10)+a2/10;
    int a4=100000*(a3%10)+a3/10;
    int a5=100000*(a4%10)+a4/10;
    if(isprime(a) && isprime(a1) && isprime(a2) && isprime(a3) && isprime(a4) && isprime(a5))
    {return 1;}
    else {return 0;}
}

int main()
{
    int count=13;
    for (int i=101;i<=999;i=i+2) {
        if(isprime(i) && (i/10)%2>0 && (i/100)%2>0)
        {
            if (circular100(i))
            {printf("Circular %d\n", i);
                count++;}
        }
    }
    printf("Current count is %d\n", count);
    for (int i=1001;i<=9999;i=i+2) {
        if(isprime(i) && (i/10)%2>0 && (i/100)%2>0 && (i/1000)%2>0)
        {
            if (circular1000(i))
            {printf("Circular %d\n", i);
                count++;}
        }
    }
    printf("Current count is %d\n", count);
    for (int i=10001;i<=99999;i=i+2) {
        if(isprime(i) && (i/10)%2>0 && (i/100)%2>0 && (i/1000)%2>0 && (i/10000)%2>0)
        {
            if (circular10000(i))
            {printf("Circular %d\n", i);
                count++;}
        }
    }
    printf("Current count is %d\n", count);
    for (int i=100001;i<=999999;i=i+2) {
        if(isprime(i) && (i/10)%2>0 && (i/100)%2>0 && (i/1000)%2>0 && (i/10000)%2>0 && (i/100000)%2>0)
        {
            if (circular100000(i))
            {printf("Circular %d\n", i);
                count++;}
        }
    }
    printf("Current count is %d\n", count);

    return 0;
}
