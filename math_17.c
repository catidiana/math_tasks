#include <stdio.h>

int main()
{
    int digit[9];
    digit[0]= 3; //1
    digit[1]= 3;
    digit[2]= 5;
    digit[3]= 4;
    digit[4]= 4;
    digit[5]= 3;
    digit[6]= 5;
    digit[7]= 5;
    digit[8]= 4; //9
    int spec[10];
    spec[0]=3;
    spec[1]=6; //11
    spec[2]=6;
    spec[3]=8; //13
    spec[4]=8;
    spec[5]=7; //15
    spec[6]=7;
    spec[7]=9; //17
    spec[8]=8;
    spec[9]=8; //19
    int tens[8];
    tens[0]=6; //20
    tens[1]=6;
    tens[2]=5; //40
    tens[3]=5;
    tens[4]=5; //60
    tens[5]=7;
    tens[6]=6; //80
    tens[7]=6;
    int hundred=7;
    int and=3;
    int thousand=8;
    int SUM=0;
    int sum_d=0;
    for (int i=0;i<9;i++) {
        sum_d=sum_d+digit[i];
    }
    printf("%d\n", sum_d);
    int sum_s=0;
    for (int i=0;i<10;i++) {
        sum_s=sum_s+spec[i];
    }
    printf("%d\n", sum_s);
    int sum_t=0;
    for (int i=0;i<8;i++) {
        sum_t=sum_t+tens[i];
    }
    printf("%d\n", sum_t);
    int SUM_99;
    SUM_99=sum_s+sum_d*9+sum_t*10; //1-99
    printf("%d\n", SUM_99);

    SUM=100*sum_d+hundred*900+and*891+SUM_99*10+thousand+3;
    printf("%d\n", SUM);

    return 0;
}
