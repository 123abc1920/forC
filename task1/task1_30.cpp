#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    long double s = 0;

    while (abs(pow(-1, n) / pow(n + 1, 2)) - 0 > 0.0001)
    {
        s += pow(-1, n) / pow(n + 1, 2);
        n++;
    }

    cout << "Сумма ряда: " << s << endl;

    return 0;
}