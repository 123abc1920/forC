#include <iostream>
using namespace std;

int main()
{
    double n = 1, term = 0.5, sum = 0;

    do
    {
        sum += term;
        term *= n;
        n++;
        term /= 2.0 * n;
        // cout << sum << endl;
    } while (term > 1e-6);

    cout << "Сумма ряда: " << sum << endl;

    /*------------------*/

    n = 1, term = 0.5, sum = 0;
    double a = 0;

    do
    {
        sum += term;
        (((term *= 0.5) *= n) /= (n + 1), n++);
    } while (term > 1e-6);

    cout << "Сумма ряда: " << sum << endl;

    return 0;
}