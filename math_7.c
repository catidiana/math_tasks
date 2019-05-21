#include <stdio.h>

int isprime (int num)
{
    if (num == 1) return 0;
    if (num == 2) return 1;

    for (int i = 2; i <=num/2; i++)
    {
        if (num % i == 0) return 0;
    }

    return 1;
}

int main()
{
    int num=0;
    int count=0;
    int i=1;
    while (count!=10001)
    {if(isprime(i))
        {
            num=i;
            count=count+1;
        }
        i++;
    }
    printf("Prime number #10001 is %d\n", num);
    return 0;
}
