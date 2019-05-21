#include <stdio.h>
// What is the sum of the digits of the number 2^1000

int main()
{
   long long power=1;
   for (int i=1;i<=50;i++) {
       power=power*2;
       printf("%lli\n", power);
   }

    return 0;
}
