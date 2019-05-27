#include <iostream>
#include <cmath>
using namespace std;
//this function return the length of number
int num_len(int a)
{
    int len=0;
    while (a!=0) {
        a=a/10;
        len++;
    }
    return len;
}
//this function return element #j in number a
int num_j(int a, int j)
{
    int el;
    int len=num_len(a);
    a=a/pow(10, len-j);
    el=a%10;
    return el;

}

int main()
{ int d=0;
    int mult=1;
    for (int i=1;i<1000000;i++) {
        for (int j=1;j<=num_len(i);j++) {
            d++;
            if(d==1 || d==10 || d==100 || d==1000 || d==10000 || d==100000 || d==1000000)
            {
                mult=mult*num_j(i, j);
                cout << "current d is " << d << " multipl is " << mult << endl;
            }
        }
        if (d>1000000) break;
    }
    cout << "Result is " << mult << endl;
    return 0;
}
