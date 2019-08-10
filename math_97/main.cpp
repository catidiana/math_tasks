#include <iostream>
#include <unsigned_big_integer.h>

using namespace std;


int main()
{
    unsigned long long int a = 1;
    for (int i = 0; i < 7830457; i++)
    {
        a *=2;
        if (a > 1000000000000) a = a%1000000000000;
    }
    cout << a << endl;
    Unsigned_Big_Integer res(a);
    cout << a*28433 + 1;

    return 0;
}
