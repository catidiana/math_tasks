#include <iostream>

using namespace std;

long long reverse (long long a)
{
    long long b=0;
    while(a>0)
    {
        b=b*10+a%10;
        a=a/10;
    }
    return b;
}

int is_palindrom (long long a)
{
if (a==reverse(a)) return 1;
else return 0;
}

int main()
{
    int Lychrel_count = 9999;
    for (long long i  = 1;i<10000;i++) {
        int step = 0;
        long long test = i;
        do {
            test = test + reverse(test);
            if (is_palindrom(test)) {
                --Lychrel_count;
                break;
            }
            step++;
        } while (step<50);
    }
    cout << "Lyrchel number is " << Lychrel_count << endl;
    return 0;
}
