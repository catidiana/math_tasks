#include <iostream>

using namespace std;

int sqdigitsum (int a) {
    int result = 0;
    while (a !=0) {
        int k = a%10;
        a = a/10;
        result = result + k*k;
    }
    return result;
}

int main()
{
int sum = 0;
for (int i = 1;i <10000000;i++) {
    int a = i;
    while (a !=1 && a !=89) {
        a = sqdigitsum(a);
    }
    if (a == 89) sum++;
}
cout << sum << endl;

    return 0;
}
