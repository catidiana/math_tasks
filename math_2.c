#include <stdio.h>
// Find the sum of the even-valued terms in the Fibonacci sequence whose values do not exceed four million



int main()
{
    int f1=1;
    int f2=2;
    int f3=0;
    int sum=2;
    while (f3<4000000)
    {
        f3=f1+f2;
        if (f3%2==0)
        {
            sum=sum+f3;
        }
        f1=f2;
        f2=f3;

    }
    printf("Result is %d\n", sum);
    return 0;
}
