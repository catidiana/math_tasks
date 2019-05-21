#include <stdio.h>
#include <math.h>
int main()
{
    int n=1;
    int trian;
    int count=0;
    while (1) {
        trian=n*(n+1)/2;
        int count=0;
        int sq=sqrt(trian);
        for (int i=1;i<=sq;i++)
        {
         if(trian%i==0)
         {
             count=count+2;
         }
        }
         if(count>500)
         {break;}
         else {
              n=n+1;
         }
    }
   printf("Triangle %d\n", trian);
    return 0;
}
