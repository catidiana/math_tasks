#include <stdio.h>

int main()
{
    int cent1=1;
    int cent2=2;
    int cent5=5;
    int cent10=10;
    int cent20=20;
    int cent50=50;
    int e1=100;
    int e2=200;
    int count=0;
    for (int i=0; i<=200;i++) {
        int sum1;
        sum1 = i*cent1;
        for (int j=0;j<=100;j++) {
           int sum2;
            sum2=sum1+j*cent2;
            if(sum2>200)
            {break;}
            if(sum2==200)
            {count=count+1;
                break; }
            for (int k=0;k<=40;k++) {
                int sum3;
                sum3=sum2+k*cent5;
                if(sum3>200)
                {break;}
                if(sum3==200)
                {count=count+1;
                    break; }
                for (int l=0;l<=20;l++) {
                    int sum4;
                    sum4 = sum3+l*cent10;
                    if(sum4>200)
                    {break;}
                    if(sum4==200)
                    {count=count+1;
                        break; }
                    for (int m=0;m<=10;m++) {
                        int sum5;
                        sum5=sum4+m*cent20;
                        if(sum5>200)
                        {break;}
                        if(sum5==200)
                        {count=count+1;
                            break; }
                        for (int r=0;r<=4;r++) {
                            int sum6;
                            sum6=sum5+r*cent50;
                            if(sum6>200)
                            {break;}
                            if(sum6==200)
                            {count=count+1;
                                break; }
                            for (int s=0;s<=2;s++) {
                                int sum7;
                                sum7=sum6+s*e1;
                                if(sum7>200)
                                {break;}
                                if(sum7==200)
                                {count=count+1;
                                    break; }
                                for (int h=0;h<=1;h++) {
                                    int sum8;
                                    sum8=sum7+h*e2;
                                    if(sum8>200)
                                    {break;}
                                    if(sum8==200)
                                    {count=count+1;
                                        break; }

                                }
                            }
                        }
                    }
                }
            }
        }

    }
    printf("Result is %d\n", count);
    return 0;
}
