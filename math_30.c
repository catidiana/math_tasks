#include <stdio.h>
// Find the sum of all the numbers that can be written as the sum of fifth powers of their digits
#define POWER 5

int pow(int a, int b) //calculat a^b
{
    if(b==0) {return 1;}
    else if (b==1) {return a;}
    else {
        int res=1;
        for (int i=1;i<=b;i++) {
            res=res*a;
        }
        return res;
    }
}

int len(int a) //return digit lenth
{
    int count =0;
    while (a>0) {
        a=a/10;
        count++;
    }
    return count;
}

int test (int a)
{
    int l=len(a);
    int array[l];
    for (int i=0;i<l;i++) {
        int k1=pow(10, i+1);
        int k2 = pow(10, i);
        array[i]=(a%k1)/k2;
        //printf("%d\n", array[i]);
    }
    int b=0;
    for (int i=0;i<l;i++) {
        b=b+pow(array[i], POWER);
    }
    if(a==b) {return 1;}
    else {return 0;}
}

int main()
{
    int sum =0;
    for (int i=2;i<10000000;i++) {
        if(test(i))
        {printf("%d\n", i);
        sum=sum+i;}
    }
    printf("Result is %d\n", sum);
    return 0;
}
