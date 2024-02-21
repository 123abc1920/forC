#include <iostream>
#include <math.h>
using namespace std;

long double factorial(int i)
{
    long double n = 1;
    for (int j = 1; j < i; j++)
    {
        n *= j;
    }

    return n;
}

int main()
{
    long double s = 0.0;

    for (int i = 1; i < 100; i++)
    {
        s += 1.0 / factorial(i);
    }

    cout << s;

    return 0;
}