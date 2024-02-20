#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long double s = 0;
    int n = 0;

    while (abs(pow(-1, n) / pow((n + 1), 4)) > 0.0001)
    {
        s += pow(-1, n) / pow((n + 1), 4);
        n++;
    }

    cout << s;

    return 0;
}