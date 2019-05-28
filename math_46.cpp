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

int main()
{
    for (int i=9;i<=10000;i=i+2) {
        if(isprime(i)==0)
        {
            int Goldbach=0;
            for (int j=3;j<i;j=j+2) {
                if(isprime(j))
                {
                    int test=(i-j)/2;
                    int sq=sqrt(test);
                    if (sq*sq==test)
                    {
                        Goldbach=1;
                        break;
                    }
                }
            }
            if (Goldbach==0)
            {
                cout << "Composite " << i << " break Goldbach rule" << endl;
                break;
            }
        }
    }
    cout << "Hello World!" << endl;
    return 0;
}
