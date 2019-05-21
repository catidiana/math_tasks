#include <stdio.h>

int main()
{
   long long power=1;
   for (int i=1;i<=50;i++) {
       power=power*2;
       printf("%lli\n", power);
   }

    return 0;
}
