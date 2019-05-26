#include <iostream>
// 1 2 3 4 5 6 7 8 9 * =
// it can be x*xxxx=xxxx
// or xx*xxx=xxxx
//I use Heap permutation algorithm
# define N 9
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
    //I put numbers 1.... N to this array but you can put any numbers
    for (int i=0;i<N;i++) {
        A[i]=i+1;
        c[i]=0;
    }

    if(A[0]*(A[1]*1000+A[2]*100+A[3]*10+A[4])==A[5]*1000+A[6]*100+A[7]*10+A[8])
    {
      cout << A[0] << "*" << A[1] << A[2] << A[3] << A[4] << "=" << A[5] << A[6] << A[7] << A[8] << endl;
    }
    if((A[0]*10+A[1])*(A[2]*100+A[3]*10+A[4])==A[5]*1000+A[6]*100+A[7]*10+A[8])
    {
      cout << A[0] << A[1] << "*" << A[2] << A[3] << A[4] << "=" << A[5] << A[6] << A[7] << A[8] << endl;
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
            if(A[0]*(A[1]*1000+A[2]*100+A[3]*10+A[4])==A[5]*1000+A[6]*100+A[7]*10+A[8])
            {
              cout << A[0] << "*" << A[1] << A[2] << A[3] << A[4] << "=" << A[5] << A[6] << A[7] << A[8] << endl;
            }
            if((A[0]*10+A[1])*(A[2]*100+A[3]*10+A[4])==A[5]*1000+A[6]*100+A[7]*10+A[8])
            {
              cout << A[0] << A[1] << "*" << A[2] << A[3] << A[4] << "=" << A[5] << A[6] << A[7] << A[8] << endl;
            }
            c[i]+=1;
            i=0;
        }
        else {
            c[i]=0;
            i+=1;
        }
    }

    return 0;
}
