#include <stdio.h>

int main()
{
    int a[20][20];
    printf("Input your table\n");
    for (int i=0;i<20;i++) {
        for (int j=0;j<20;j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    int max=0;
    int test=0;
    //test horizontal;
    for (int i=0;i<20;i++) {
        for (int j=0;j<16;j++) {
            test=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
            if(test>max)
            {max=test;}
        }
    }
    //test vertical
    for (int i=0;i<16;i++) {
        for (int j=0;j<20;j++) {
            test=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
            if(test>max)
            {max=test;}
        }
    }
    //test diagonal standart
    for (int i=0;i<16;i++) {
        for (int j=0;j<16;j++) {
            test=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
            if(test>max)
            {max=test;}
        }
    }
    //test diagonal reverse
    for (int i=0;i<16;i++) {
        for (int j=3;j<20;j++) {
            test=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
            if(test>max)
            {max=test;}
        }
    }
    printf("Maximum result is %d\n", max);
    return 0;
}
