#include <iostream>
#include "cmath"
using namespace std;
int main() {
    double summ = 0;
    for (int i = 2; i < 8; i++) {
        double x = 1./ (0.5*log2(i));
        cout << x << endl;
        summ += x;
    }
    cout << endl << summ;
    return 0;
}
