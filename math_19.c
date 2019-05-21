#include <stdio.h>

int main()
{
    int year;
    int month;
    int mday;
    int day;
    int counter=0;
    int Sunday=0;
    for (int year=1900; year<2000;year++) {
        for (month=1;month<13;month++) {
            if(month%2==1)
            {mday=31;}
            else if (month==2) {
                if(year==1900) {mday=28;}
                else if (year==2000) {mday=29;}
                else if (year%4==0) {mday=29;}
                else {mday=28;}}
            else {mday=30;}
            day=0;
            while (day<mday) {
                counter=counter+1;
                day=day+1;
                if(counter%7==0 && day==1)
                {Sunday=Sunday+1;}
            }
            }
       //printf("number of Sundays is %d\n", Sunday);
            }
    printf("numver of Sundays is %d\n", Sunday);

    return 0;
}
