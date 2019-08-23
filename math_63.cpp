#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k = 1;
    double t = 1;
    int sum = 0;
    while (t < 9) {
        t = 10.0/pow(10, 1.0/k);
        sum = sum + (10 - t);
        k++;
    }
    cout << sum << endl;
    return 0;
}
