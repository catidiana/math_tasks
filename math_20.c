#include <stdio.h>
#define FACT 100

int main()
{
    int a[200];
    for (int i=0;i<200;i++) {
        a[i]=0;
    }
    a[0]=1;
    int mod1, mod2, mod3;
    for (int j=2;j<=FACT;j++) {
        mod1=0;
        mod2=0;
        mod3=0;
        for (int i=0;i<200;i++) {
            a[i]=a[i]*j+mod1+mod3;
            if(a[i]<10)
            {
                mod1=0;
                mod3=mod2;
                mod2=0;
            }
            if(a[i]>=10 && a[i]<100)
            {
                mod1=a[i]/10;
                a[i]=a[i]%10;
                mod3=mod2;
                mod2=0;
            }
            if(a[i]>=100)
            {
                mod1=(a[i]/10)%10;
                mod3=mod2;
                mod2=a[i]/100;
                a[i]=a[i]%10;
            }
        }

    }
    int sum=0;
    for (int i=0;i<200;i++) {
        sum=sum+a[i];
    }
    printf("Sum is equal to %d\n", sum);
    return 0;
}
