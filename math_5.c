#include <stdio.h>
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int isprime (int num)
{
    if (num == 1) return 0;
    if (num == 2) return 1;

    for (int i = 2; i <=num/2; i++)
    {
        if (num % i == 0) return 0;
    }

    return 1;
}

int main()
{
    int parray[10];
    int j=0;
    for (int i=1;i<=20;i++) {
        if(isprime(i)==1)
        {parray[j]=i;
            j++;}
    }
    int array[j];
    for (int i=0;i<j;i++)
    {
        array[i]=parray[i];
        if(array[i]<20)
        {
            while (array[i]<20) {
                array[i]=array[i]*parray[i];
            }
            array[i]=array[i]/parray[i];
        }
    }
    int result=1;
    for (int i=0;i<j;i++) {
        result=result*array[i];}
    printf("%d\n", result);
    return 0;
}
