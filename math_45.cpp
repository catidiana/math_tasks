#include <iostream>
#include <cmath>
//Tn=n(n+1)/2 arithmetic progression with d=1 a1=1
//Pn=n(3n−1)/2 arithmetic progression with d=3 a1=1
//Hn=n(2n−1) arithmetic progression with d=4 a1=1
using namespace std;
//this function test if number is triangle
int triangle (long long a)
{
    long long test=sqrt(2*a);
    long long T[3];
    for (int i=0;i<3;i++) {
        T[i]=(test-1+i)*(test-1+i+1)/2;
    }
    if (a!=T[0] && a!=T[1] && a!=T[2]) return 0;
    else return 1;
}
//this function test if number is pentagonal
int pentagonal (long long a)
{
    long long test=sqrt(2*a/3);
    long long T[3];
    for (int i=0;i<3;i++) {
        T[i]=(test-1+i)*(3*(test-1+i)-1)/2;
    }
    if (a!=T[0] && a!=T[1] && a!=T[2]) return 0;
    else return 1;
}

//this function test if number is hexagonal
int hexagonal (long long a)
{
    long long test=sqrt(a/2);
    long long T[3];
    for (int i=0;i<3;i++) {
        T[i]=(test-1+i)*(2*(test-1+i)-1);
    }
    if (a!=T[0] && a!=T[1] && a!=T[2]) return 0;
    else return 1;
}


int main()
{ long long i=40756;
    while (1) {
        if (triangle(i) && pentagonal(i) && hexagonal(i))
        {
            cout << "Special number is " << i << endl;
            break;}
        i++;
    }
    cout << "Hello World!" << endl;
    return 0;
}
