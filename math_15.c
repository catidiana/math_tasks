#include <stdio.h>
#define RANGE 20
long long fact(int a)
{
    if (a==1 || a==0)
    {return 1;}
    if(a>1)
    {
        int res;
        res=a*fact(a-1);
        return res;
    }
}

long long binom(int m, int n)
{
    long long b=1;
    // b=fact(n)/(fact(m)*fact(n-m));
    if (m>=n/2)
    {for (int i=m+1;i<=n;i++) {
            b=b*i;
        }
        b=b/fact(n-m);
    }
    else {
        for (int i=n-m+1;i<=n;i++) {
            b=b*i;
        }
        b=b/fact(m);
    }
    return b;
}


int main()
{
    long long a[RANGE+1];
    for (int i=0;i<=RANGE;i++) {
        a[i]=binom(i,RANGE);
        printf("%lli\t", a[i]);
    }
    printf("\n");
    int k=RANGE;
    while (a[1]>0) {

    for (int i=0;i<=RANGE;i++) {
        a[i]=a[i]+a[i+1];
    }
    a[k]=0;
    k--;
    }

 printf("%lli\n", a[0]);

    return 0;
}
