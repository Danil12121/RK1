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

/* Мой вывод:
2
1.26186
1
0.861353
0.773706
0.712414

6.60933
*/
