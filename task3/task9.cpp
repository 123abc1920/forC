#include <iostream>
using namespace std;

void print(float **e, int h, int w)
{
    cout << endl;
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            cout << e[j][i] << " ";
        }
        cout << endl;
    }
}

float **create(int h, int w)
{
    float **e = new float *[h];

    for (int i = 0; i < h; i++)
    {
        e[i] = new float[w];
    }

    int a = 0;

    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            cin >> a;
            e[j][i] = a;
        }
    }

    return e;
}

void change(float **e, int h, int w)
{
    if (h % 2 != 0)
    {
        h -= 1;
    }

    /*??????????????????????????????????*/
    float *a = new float(w);
    for (int i = 0; i < h; i += 2)
    {
        a = e[i];
        e[i] = e[i + 1];
        e[i + 1] = a;
    }
    a = nullptr;
    delete[] a;
}

int main()
{
    int h, w;
    cin >> h >> w;
    float **e = create(h, w);

    print(e, h, w);
    change(e, h, w);
    print(e, h, w);

    // cout << endl;
    // cout << *(*(e + 1) + 2);

    for (int i = 0; i < h; i++)
    {
        delete[] e[i];
    }
    delete[] e;

    return 0;
}