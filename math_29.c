#include <stdio.h>
#include <math.h>
void bubble_sort(int *a, int size)
{
    int temp;
    int swap;
    while (1)
    {
        swap=0;
        for(int i=0; i<size-1;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap=1;
            }
        }
        if(swap==0)
        {break;}
    }
}



int main()
{
    int start=99*99;
    int ar2[99];
    int ar4[99];
    int ar8[99];
    int ar16[99];
    int ar32[99];
    int ar64[99];
    for (int i=2;i<=100;i++) {
        ar2[i-2]=i;
        ar4[i-2]=i*2;
        ar8[i-2]=i*3;
        ar16[i-2]=i*4;
        ar32[i-2]=i*5;
        ar64[i-2]=i*6;
    }
    int a[99*6];
    for (int i=0;i<99;i++) {
        a[i]=ar2[i];
        a[99+i]=ar4[i];
        a[2*99+i]=ar8[i];
        a[3*99+i]=ar16[i];
        a[4*99+i]=ar32[i];
        a[5*99+i]=ar64[i];
    }
    bubble_sort(a, 99*6);

    int dub2=0;
    for (int i=0;i<99*6-1;i++) {
        if(a[i]==a[i+1]) {dub2++;}
    }
    printf("%d\n", dub2);

    int ar3[99];
    int ar9[99];
    int ar27[99];
    int ar81[99];
    for (int i=2;i<=100;i++) {
        ar3[i-2]=i;
        ar9[i-2]=i*2;
        ar27[i-2]=i*3;
        ar81[i-2]=i*4;
    }
    int b[99*4];
    for (int i=0;i<99;i++) {
        b[i]=ar3[i];
        b[99+i]=ar9[i];
        b[2*99+i]=ar27[i];
        b[3*99+i]=ar81[i];
    }
    bubble_sort(b, 99*4);

    int dub3=0;
    for (int i=0;i<99*4-1;i++) {
        if(b[i]==b[i+1]) {dub3++;}
    }
    printf("%d\n", dub3);
    int dub=dub2+dub3+49+49+49+49;
    printf("Result is %d\n", start-dub);
    return 0;
}
