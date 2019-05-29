#include <iostream>
#include <cmath>
using namespace std;
// this function test if number is prime
int isprime (int num)
{
    if (num == 1) return 0;
    if (num == 2) return 1;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0) return 0;
    }
}
//this function return the length of number
int num_len(int a)
{
    int len=0;
    while (a!=0) {
        a=a/10;
        len++;
    }
    return len;
}

int main()
{
    int a;
    for (a=11;a<=1000000;a=a+2) {
        int len=num_len(a);
        int *c = new int [len];
        int *adigits = new int [len];
        int a2=a;
        for (int j=len-1;j>=0;j--) {
            adigits[j]=a2%10;
            a2=a2/10;
        }
        int count=pow(2, len)-1;
        int break_flag=0;
        for (int i=1;i<=count;i++) {
            int s=i;
            //fill encoding array c;
            for (int j=0;j<len;j++) {
                c[j]=s%2;
                s=s/2;
            }
            int flag=0;
            int start;
            if (c[0]==0) start=1; else start=0;
            for (int star=start;star<10;star++) {
                int test=0;
                for (int d=0;d<len;d++) {
                    if (c[d]==0) test=test*10+star;
                    else test=test*10+adigits[d];
                }
                if(isprime(test)) flag=flag+1;
            }
            if (flag==8)
            {
                cout << "Number we look for is ";
                for (int p=0;p<len;p++) {
                    cout << adigits[p];
                }
                cout << " with encoder (0 is star 1 is number) ";
                for (int p=0;p<len;p++) {
                    cout << c[p];
                }
                cout << endl;
                break_flag=1;
                break;
            }
        }
        delete [] c;
        delete [] adigits;
        if (break_flag==1) break;
    }
    return 0;
}
