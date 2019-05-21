#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int flag=0;
    for (int i=1;i<500;i++) {
        a=i;
        for (int j=1;j<(1000-i)/2;j++)
        {
            b=j;
            c=1000-a-b;
            int left=a*a+b*b;
            int right=c*c;
            if(left==right)
            {flag=1;
                break;}
            else {
                flag=0;
            }
        }
        if(flag==1)
        {break;}
    }
    printf("%d\t%d\t%d\n", a, b, c);
    int ad=a*b*c;
    printf("%d\n", ad);

    return 0;
}
