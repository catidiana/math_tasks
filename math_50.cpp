#include <iostream>
#include <cmath>
using namespace std;
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
{
    //Amount of primes below 1M is 78498, I create array of primes
    int *primes;
    primes=(int*) malloc(78498*sizeof(int));
    primes[0]=2;
    int j=1;
    for (int i=3;i<1000000;i=i+2) {
        if(isprime(i))
        {
            primes[j]=i;
            j++;
        }
    }
    cout << "Amount of primes below 1M is " << j << endl;
    int max=0;
    int P_max=0;
    for (int i=0;i<78498;i++) {
        int P=primes[i];
        for (int j=1;j<78498-i;j++) {
            P=P+primes[i+j];
            if(P>=1000000) break;
            if (isprime(P))
            {
                if(j+1>max)
                {
                    max=j+1;
                    P_max=P;
                }
            }
        }
    }
    cout << "Max prime is " << P_max << " gives consequence of " << max << endl;
    free (primes);
    return 0;
}
