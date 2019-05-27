#include <iostream>
#include <cmath>
using namespace std;

void swap (int *array, int i, int j)
{
    int s=array[i];
    array[i]=array[j];
    array[j]=s;
}
//this function test if number is prime. It returns 1 if it's prime
int isprime (int num)
{
  if (num == 1) return 0;
  if (num == 2) return 1;

  for (int i = 2; i <= sqrt(num); i++)
    {
      if (num % i == 0) return 0;
    }
}

int main()
{   int max=0;
    for (int N=2;N<10;N++) {
    int A[N]; //array to permutate
    int c[N]; //array to encode stack
    //I put numbers 1.... N to this array but you can put any numbers
    int test=0;
    for (int i=0;i<N;i++) {
        A[i]=i+1;
        c[i]=0;
        test=test*10+A[i];
            }
    if(isprime(test) && test>max) max=test;
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
            if(isprime(test) && test>max) max=test;
            c[i]+=1;
            i=0;
        }
        else {
            c[i]=0;
            i+=1;
        }
    }
    }
    cout << "Max pandigital prime is " << max << endl;

    return 0;
}
