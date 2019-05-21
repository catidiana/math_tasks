#include <stdio.h>

int main()
{
    int a[1000];
    int b[1000];
    int c[1000];
    for (int i=0;i<1000;i++) {
        a[i]=0;
        b[i]=0;
        c[i]=0;
    }
    a[0]=1;
    b[0]=1;
    int count=2;
    while(b[999]==0)
    {
        int mod=0;
        for (int i=0;i<1000;i++) {
            c[i]=a[i]+b[i]+mod;
            if(c[i]>=10)
            {
                mod=c[i]/10;
                c[i]=c[i]%10;
            }
            else {
                mod=0;
            }
        }
        for (int i=0;i<1000;i++) {
            a[i]=b[i];
            b[i]=c[i];
            c[i]=0;
        }
        count++;

    }
    printf("Resut is %d\n", count);
    return 0;
}
