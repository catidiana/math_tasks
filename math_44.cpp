#include <iostream>
#include <cmath>
// Pn=n(3n−1)/2 - pentagonal number

using namespace std;
//this function test if number is pentagonal
int pentagonal (int a)
{
    int test=sqrt(2*a/3);
    int T[3];
    for (int i=0;i<3;i++) {
        T[i]=(test-1+i)*(3*(test-1+i)-1)/2;
    }
    if (a!=T[0] && a!=T[1] && a!=T[2]) return 0;
    else return 1;
}
int modul (int a)
{
    if (a>=0) return a;
    else return -a;
}


int main()
{
    for(int i=1;i<=10000;i++)
    {
        int P1=i*(3*i-1)/2;
        for (int j=1;j<=10000;j++) {
            int P2=j*(3*j-1)/2;
            if (pentagonal(P1+P2))
            {
                if( i!=j && pentagonal(modul(P1-P2)))
                {
                    cout << "Pentagonal number " << i << " is " << P1 << " and Pentagonal number " << j << " is " << P2 << " give difference " << modul(P1-P2) << endl;
                }
            }
        }
    }
    cout << "Hello World!" << endl;
    return 0;
}
