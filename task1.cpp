#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long double s = 0;
    int n = 0;

    for (int i = 0; i < 100; i++)
    {
        s += pow(-1, i) / pow((i + 1), 4);
    }

    cout << s;

    return 0;
}