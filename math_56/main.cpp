#include <iostream>
#include <unsigned_big_integer.h>

using namespace std;

int main()
{
    Unsigned_Big_Integer max(0);
    int base = 1;
    int pow = 1;
    for (int i = 1;i < 100;i++) {
        for (int j = 1;j < 100;j++) {
            Unsigned_Big_Integer temp = Big_Power(i, j);
            if (max < temp.Digits_Sum()) {
                max = temp.Digits_Sum();
                base = i;
                pow = j;
            }
    }
    }
    cout << "Result is " << base << "^" << pow << " Sum is " << max << endl;
    return 0;
}
