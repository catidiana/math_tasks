#include <stdio.h>



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
