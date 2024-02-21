#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    long double s = 0;

    while (abs(pow(-1, n) / (2 * n + 1)) > 0.0001)
    {
        s += pow(-1, n) / (2 * n + 1);
        n++;
    }

    cout << "Сумма ряда: " << s << endl;

    return 0;
}