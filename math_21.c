#include <stdio.h>
#include <math.h>
int div_sum(int a)
{

    int sum = 1;
    if (a==0 || a==1)
    {return 0;}
    if (a==2 || a==3)
    {return 1;}
    else if(a==4)
    {return 3;}
    else{
        int sq=sqrt(a);
    for (int i=2;i<sq;i++) {
        if(a%i==0)
        {sum = sum + i + a/i;}
    }
    if (sq*sq==a)
    {sum=sum+sqrt(a);}}
    return sum;
}

int main()
{
    int b[10001];
    for (int i=0;i<10001;i++) {
        b[i]=div_sum(i);
    }
    int sum=0;
    for (int i=0;i<10001;i++) {
        if(b[i]<10001 && b[i]!=i)
        {

            if (b[b[i]]==i)
            {
                sum=sum+i;
                printf("%d\n", i);
            }
        }
    }

    printf("Result is %d\n", sum);
    return 0;
}
