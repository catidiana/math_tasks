#include <iostream>
using namespace std;
//Find the sum of all numbers which are equal to the sum of the factorial of their digits

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

int main()
{
    int sum=0;
    for (int i=10;i<100;i++) {
        int t1=i/10;
        int t2=i%10;
        if(factorial(t1)+factorial(t2)==i)
        {
            cout << i << endl;
            sum=sum+i;
        }
    }
    for (int i=100;i<1000;i++) {
        int t1=i/100;
        int t2=(i/10)%10;
        int t3=i%10;
        if(factorial(t1)+factorial(t2)+factorial(t3)==i)
        {
            cout << i << endl;
            sum=sum+i;
        }
    }
    for (int i=1000;i<10000;i++) {
        int t1=i/1000;
        int t2=(i/100)%10;
        int t3=(i/10)%10;
        int t4=i%10;
        if(factorial(t1)+factorial(t2)+factorial(t3)+factorial(t4)==i)
        {
            cout << i << endl;
            sum=sum+i;
        }
    }
    for (int i=10000;i<100000;i++) {
        int t1=i/10000;
        int t2=(i/1000)%10;
        int t3=(i/100)%10;
        int t4=(i/10)%10;
        int t5=i%10;
        if(factorial(t1)+factorial(t2)+factorial(t3)+factorial(t4)+factorial(t5)==i)
        {
            cout << i << endl;
            sum=sum+i;
        }
    }
    for (int i=100000;i<1000000;i++) {
        int t0=i/100000;
        int t1=(i/10000)%10;
        int t2=(i/1000)%10;
        int t3=(i/100)%10;
        int t4=(i/10)%10;
        int t5=i%10;
        if(factorial(t1)+factorial(t2)+factorial(t3)+factorial(t4)+factorial(t5)+factorial(t0)==i)
        {
            cout << i << endl;
            sum=sum+i;
        }
    }
     cout << "sum is " << sum << endl;
    return 0;
}
