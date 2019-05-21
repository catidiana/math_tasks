#include <stdio.h>

int main()
{
    long long array[100]={};
    int c = getchar();
    int k=0;
    int i=0;
    int trash=0;
    while (c!=EOF) {
        if(c!='\n')
        {
        if(i<11)
        {array[k]=array[k]*10+c-'0';
            i++;

        }
        if(i>11)
        {
            trash=c;
            i++;
        }
        }
        if(c=='\n')
        {
            k=k+1;
            i=0;
        }
        c = getchar();
    }
    long long sum=0;
    for (int j=0;j<100;j++) {
        sum=sum+array[j];
    }
    printf("Result is %lli\n", sum);
    return 0;
}
