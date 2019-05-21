#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a[1000];
    int i=0;
    int c=getchar();
    while(c!=EOF)
    {
        if(c!='\n')
        {a[i]=c;
            a[i]=a[i]-48;
            i++;}
        c=getchar();
    }
    long long mul[987];
    for (int j=0;j<987;j++) {
        mul[j]=a[j]*a[j+1]*a[j+2]*a[j+3]*a[j+4]*a[j+5]*a[j+6]*a[j+7]*a[j+8]*a[j+9]*a[j+10]*a[j+11]*a[j+12];
               }
    long long test=0;

    for (int j=0;j<987;j++)
    {
        if(mul[j]>test)
        {test=mul[j];}
    }


   printf("The biggest mul %lli\n", test);
    return 0;
}
