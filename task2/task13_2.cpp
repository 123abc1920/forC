#include <iostream>
using namespace std;

int main()
{
    int l;
    cin >> l;
    int *a = new int[l];
    int *b = new int[2 * l];

    for (int i = 0; i < l; i++)
    {
        *(a + i) = i + 1;
        cout << i + 1 << " ";
    }

    cout << endl;
    for (int i = 0, j = 0; i < l; i++, j += 2)
    {
        b[j] = b[j + 1] = a[i];
    }

    for (int i = 0; i < l * 2; i++)
    {
        cout << *(b + i) << " ";
    }

    delete[] a;
    delete[] b;
    return 0;
}