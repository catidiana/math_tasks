#include <stdio.h>
int fact(int a)
{
    int f;
    if (a==1 || a==0) {f=1;}
    else {
        f=a*fact(a-1);
    }
    return f;

}

int main()
{
    int goal = 1000000;
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int lex[10];
    for (int n=0;n<10;n++) {
    int i=0;
    while (goal>0) {
        lex[n]=a[i];
        goal=goal-fact(9-n);
        i++;
    }
    goal=goal+fact(9-n);
    printf("%d", lex[n]);
    for (int j=i-1;j<10;j++) {
        a[j]=a[j+1];
    }
    }

    return 0;
}
