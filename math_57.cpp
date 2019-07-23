#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1};
    vector<int> b = {1};
    int counter = 0;
    for (int i = 0;i<1000;i++) {
        vector<int>x = a;
        vector<int>y = b;
        size_t lenth = a.size();
        a.assign(lenth, 0);
        b.assign(lenth,0);
        for (size_t j = 0; j < lenth; j++) {
            a[j] = a[j] + 2*y[j] + x[j];
            if (a[j]>=10) {
                if (j!=lenth-1) {
                    a[j+1] = a[j+1] + a[j]/10;
                    a[j] = a[j]%10;
                } else {
                    int k = a[j]/10;
                    a.push_back(k);
                    a[j] = a[j]%10;
                }}
            b[j] = b[j] + y[j] + x[j];
            if (b[j]>=10) {
                if (j!=lenth-1) {
                    b[j+1] = b[j+1] + b[j]/10;
                    b[j] = b[j]%10;
                } else {
                    int k = b[j]/10;
                    b.push_back(k);
                    b[j] = b[j]%10;
                }}
            }
        if (a.size() > b.size()) {
            counter++;
            while (a.size()!=b.size()) {
                b.push_back(0);
            }
        }
        }
    cout << counter << endl;
    return 0;
}
