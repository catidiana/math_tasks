#include <iostream>
//Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2
using namespace std;

//this function test if number is palindrom
int palindrom (int a)
{
    int b=0;
    int test=a;
    //int l=num_len(a);
    while (test!=0) {
        int mod=test%10;
        b=b*10+mod;
        test=test/10;
    }
if (b==a) return 1; else return 0;
}
int bynary_palindrom (int a)
{
  int b=0;
  int test=a;
  while (test!=0) {
      int mod=test%2;
      b=b*2+mod;
      test=test/2;
  }
if (b==a) return 1; else return 0;
}



int main()
{
    int sum=0;
    cout << "Palindrom test" << endl;
    for (int i=0;i<1000000;i++) {
        if (bynary_palindrom(i) && palindrom(i))
        {cout << i << endl;
        sum=sum+i;}
    }
    cout << "Resulting sum is" << sum << endl;
    return 0;
}
