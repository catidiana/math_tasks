#include <stdio.h>
// Find the sum of all the multiples of 3 or 5 below 1000

int main()
{
    int sum = 0;
    for (int i=1;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
        {sum=sum+i;}
    }
    printf("Answer is %d\n", sum);
    return 0;
}
