#include <iostream>
#include <cmath>

using namespace std;
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
//bubble sort of array
void bubble_sort(int *a, int size)
{
    int temp;
    int swap;
    while (1)
    {
        swap=0;
        for(int i=0; i<size-1;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap=1;
            }
        }
        if(swap==0)
        {break;}
    }
}
//permutation test for 4-digit numbers
int permutation (int a, int b)
{
    int A[4], B[4];
    for (int i=0;i<4;i++) {
        A[i]=a%10;
        B[i]=b%10;
        a=a/10;
        b=b/10;
    }
    bubble_sort(A, 4);
    bubble_sort(B, 4);
    int a1=0;
    int b1=0;
    for (int i=0;i<4;i++) {
        a1=a1*10+A[i];
        b1=b1*10+B[i];
    }
    if (a1==b1) return 1;
    else return 0;
}

int main()
{
    for (int i=1001;i<=9999;i=i+2) {
        if (isprime(i)){
        for (int j=1000;j<=(9999-i)/2;j++) {
            if(isprime(i+j) && isprime(i+2*j))
            {
                if (permutation(i, i+j) && permutation(i, i+2*j))
                {
                    cout << "These 3 numbers are " << i << i+j << i+2*j << endl;
                }
            }
        }
        }
    }
    cout << "Hello World!" << endl;
    return 0;
}
