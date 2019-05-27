#include <iostream>

using namespace std;
int triangle_test(int a, int b, int c)
{
if (a<b+c && b<a+c && c<b+a) return 1;
else return 0;
}

int main()
{
    int M_count=0;
    int P_max=0;
    for  (int P=3;P<=1000;P++)
    {
        int count=0;
        for (int a=1;a<=P/3;a++) {
            for (int c=1;c<=P/2;c++) {
                int b=P-a-c;
                if(triangle_test(a, b, c))
                {
                    if (a*a+b*b==c*c) count++;
                }
            }
        }
        if (count>M_count) {
            M_count=count;
            P_max=P;
        }
    }
    cout << "Maximum count is " << M_count << " when perimeter is " << P_max << endl;
    return 0;
}
