#include <stdio.h>
//it's easy to calculate that sum is equal to
//4*(sum of square of odd)-1-2*N^2+2*(sum of even)
int main()
{
    int N=1001;
    int half=N/2;
    int sum=0;
    int odd=0;
    for (int i=1;i<=N;i=i+2) {
        odd=odd+i*i;
    }
    sum=4*odd-1-2*N*N+2*half*(half+1);
    printf("Result is %d\n", sum);
    return 0;
}
