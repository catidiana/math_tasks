#include <iostream>
#include <cmath>
long long factorial(int a)
{
    long long f;
    if (a == 1 || a == 0)
    {
        f = 1;
    }
    else
    {
        f = a * factorial(a - 1);
    }
    return f;
}
long long binomial (int n, int r)
{
    long long C=1;
    if (r==0 || n==r) return C;
    else {
        if (r>n-r)
        {
            for (int i=r+1;i<=n;i++) {
                C=C*i;
            }
            C=C/factorial(n-r);
        }
        else {
            for (int i=n-r+1;i<=n;i++) {
                C=C*i;
            }
            C=C/factorial(r);
        }
    }
    return C;
}

using namespace std;

int main()
{
    int amount=0;
    for (int n=1;n<=100;n++) {
        for (int r=0;r<=n;r++) {
            if(binomial(n, r)>1000000)
            {
                amount=amount+n+1-2*r;
                break;
            }

        }
    }
    cout << "Amount of binamial more than 1M is " << amount << endl;
    return 0;
}
