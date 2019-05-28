#include <iostream>
//define array lenth
# define N 10
using namespace std;

void swap (int *array, int i, int j)
{
    int s=array[i];
    array[i]=array[j];
    array[j]=s;
}

int main()
{
    int A[N]; //array to permutate
    int c[N]; //array to encode stack
    long long SUM=0;
    long long test=0;
    for (int i=0;i<N;i++) {
        A[i]=i;
        c[i]=0;
        test=test*10+A[i];
    }
    if (A[0]!=0)
    {
        if ((A[1]*100+A[2]*10+A[3])%2==0 && (A[2]*100+A[3]*10+A[4])%3==0)
        {
            if ((A[3]*100+A[4]*10+A[5])%5==0 && (A[4]*100+A[5]*10+A[6])%7==0)
            {
                if ((A[5]*100+A[6]*10+A[7])%11==0 && (A[6]*100+A[7]*10+A[8])%13==0 && (A[7]*100+A[8]*10+A[9])%17==0)
                {cout << "Special number " << test << endl;
                SUM = SUM + test;}
            }
        }
    }
    int i=0;
    while(i<N)
    {
        if(c[i]<i)
        {
            if(i%2==0)
            {swap(A, 0, i);}
            else {
                swap(A, c[i], i);
            }
            test=0;
            for (int i=0;i<N;i++) {
                test=test*10+A[i];
            }
            if (A[0]!=0)
            {
                if ((A[1]*100+A[2]*10+A[3])%2==0 && (A[2]*100+A[3]*10+A[4])%3==0)
                {
                    if ((A[3]*100+A[4]*10+A[5])%5==0 && (A[4]*100+A[5]*10+A[6])%7==0)
                    {
                        if ((A[5]*100+A[6]*10+A[7])%11==0 && (A[6]*100+A[7]*10+A[8])%13==0 && (A[7]*100+A[8]*10+A[9])%17==0)
                        {cout << "Special number " << test << endl;
                        SUM = SUM + test;}
                    }
                }
            }
            c[i]+=1;
            i=0;
        }
        else {
            c[i]=0;
            i+=1;
        }
    }
    cout << "Resulting sum is  " << SUM << endl;
    return 0;
}
