#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//this function reverse your number
int reverse (int a)
{
    int b=0;
    while(a>0)
    {
        b=b*10+a%10;
        a=a/10;
    }
    return b;
}
//this function test palindromic
int palindromic(int a)
{
if (a==reverse(a)) {return 1;}
else {return 0;}
}

int main()
{
    int largest=0;
    for (int i=100;i<999;i++) {
        for (int j=100;j<999;j++) {
            if(palindromic(i*j))
            {if (i*j>largest) {largest=i*j;}}
        }
    }
    printf("Result is %d\n", largest);

    return 0;
}
