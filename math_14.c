#include <stdio.h>

int main()
{
    int start = 500001;
    int finish = 1000000;
    int max_amount =1;
    int max_start=1;
    for (long long j=start;j<=finish;j=j+2)
    {
        int count = 1;
        long long i=j;
      //printf("%d| ", i);
        while (1) {
            if(i==1)
            {
               //printf("\n");
             //printf("%3lli| count %d", j,count);
                if(count>max_amount)
                {max_amount=count;
                    max_start=j;}
                break;
            }
            if(i>1 && i%2==0)
            {
                i=i/2;
                count=count+1;
              //  printf("-> %d ", i);
            }
            if(i>1 && i%2==1)
            {
                i=3*i+1;
                count=count+1;
           //  printf("-> %lli ", i);
            }
        }
    }
    printf("The longest chain is %d starting with %d\n", max_amount, max_start);
    return 0;
}
