#include <stdio.h>
#include <assert.h>
#define PSIZE 100

int main()
{
    int amount=(PSIZE+1)*PSIZE/2;
    int array[amount];
    int start, adjacent, s1, s2;
    FILE *myfile = fopen ("triangle.txt", "r");
      assert (myfile);
    for (int i=0;i<amount;i++) {
        fscanf (myfile, "%d", &array[i]);
    }
    fclose (myfile);
    for (int j=PSIZE-2;j>=0;j=j-1)
    {
        for (int k=0;k<=j;k++)
        {
            start=(j+1)*j/2;
            adjacent=(j+2)*(j+1)/2;
            s1=array[start+k]+array[adjacent+k];
            s2=array[start+k]+array[adjacent+k+1];
            if(s1>s2) {array[start+k]=s1;}
            else {array[start+k]=s2;}
        }
    }
    printf("%d\n", array[0]);
    return 0;
}
