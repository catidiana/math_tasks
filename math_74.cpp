#include <iostream>

using namespace std;
int factorial(int a)
{
    int f;
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

long long factorial_transform(long long a)
{
    long long res=0;
    while (a>0) {
        int k=a%10;
        res=res+factorial(k);
        a=a/10;
    }
    return res;
}

int main()
{ int M_count=0;
    for (long long i=3;i<1000000;i++) {

        int count=0;
        long long f=i;
        while (1) {
            if (f==145 || f==1 || f==2) {count++; break;}
            if (f==factorial_transform(f)) {count++; break;}
            if (f==169) {count+=3; break;}
            if (f==871 || f==872) {count+=2; break;}
            f=factorial_transform(f);
            count++;
        }
        if (count==60) {M_count++;
       cout << i << "\t" << count << endl;
    }
    }


    cout << "Result is " << M_count << endl;

    return 0;
}
