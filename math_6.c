#include <stdio.h>

int main()
{
    int s1=0;
    int s2=0;
    for (int i=1;i<=100;i++) {
        s1=s1+i*i;
        s2=s2+i;
    }
    s2=s2*s2;
    int dif=s2-s1;
    printf("Result is %d\n", dif);
    return 0;
}
