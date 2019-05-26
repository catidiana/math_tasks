#include <iostream>
//cases to test
//I*10+k/p*10+I = k/p
//k*10+I/I*10+p = k/p
//k*10+I/p*10+I = k/p
using namespace std;

int main()
{
    for (int i=1;i<10;i++) {
        for (int k=1;k<10;k++) {
            for (int p=1;p<10;p++) {
                float test1=(float)(i*10.0+k)/(float)(p*10+i);
                float test2=(float)(k*10.0+i)/(float)(i*10+p);
                float test3=(float)(k*10.0+i)/(float)(p*10+i);
                float result=(float)k/(float)p;
                if (test1==result && test1<1.0)
                {cout << "Fraction " << i << k << "/" << p << i << "=" << k << "/" << p << endl;}
                if (test2==result && test2<1.0)
                {cout << "Fraction " << k << i << "/" << i << p << "=" << k << "/" << p << endl;}
                if (test3==result && test3<1.0)
                {cout << "Fraction " << k << i << "/" << p << i << "=" << k << "/" << p << endl;}
            }
        }
    }

    return 0;
}
