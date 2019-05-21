#include <stdio.h>
#include <math.h>
int abundant(int a)
{


    if (a<12)
    {return 0;}
    else{
        int sum = 1;
        int sq=sqrt(a);
    for (int i=2;i<=sq;i++) {
        if(a%i==0)
        {sum = sum + i + a/i;}
    }
    if (sq*sq==a)
    {sum=sum-sq;}
   // printf("%d\n", sum);
    if (sum>a)
    {return 1;}
    else {return 0;}}

}

int main()
{
    int array[6965];
    int j=0;
    for (int i=1;i<=28123;i++) {
        if(abundant(i))
        {
          array[j]=i;
          j++;
        }
    }
    int sum=0;
    sum = 23*24/2; //sum from 1 to 23
    for (int i=24;i<=28123;i++) {
        int j=0;
        while (1) {
            if(array[j]>i-11)
            {sum=sum+i;
                break;}
            if (abundant(i-array[j]))
            {break;}
            j++;

}
        }
    printf("Result is %d\n", sum);
        return 0;
    }
