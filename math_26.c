#include <stdio.h>

int period(int a)
{
    int len=-1;
    int mod[a];
    mod[0]=1;
    int b=1;
    for (int i=1;i<a;i++) {
        mod[i]=(b*10)%a;
        b=(b*10)%a;
        if(b==0)
        {len=0;
        break;}
        for (int j=i-1;j>=0;j--) {
            if(mod[j]==mod[i])
            {
                len=i-j;
                break;
            }
        }
        if(len>0)
        {
            break;
        }
    }
        return len;

}

int main()
{
    int count=0;
    int num=2;
    for (int i=2;i<1000;i++) {
        if(period(i)>count)
        {count=period(i);
        num=i;}
    }
    printf("%d has longest period which is is %d\n", num, count);
    return 0;
}
