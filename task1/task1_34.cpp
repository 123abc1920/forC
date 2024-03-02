#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double s = 0, term = 1;
    int n = 0;

    do
    {

    } while ();

    while (abs(pow(-1, n) / pow((n + 1), 4)) > 1e-6)
    {
        s += pow(-1, n) / pow((n + 1), 4);
        n++;
    }

    cout << "Сумма ряда: " << s << endl;

    return 0;
}