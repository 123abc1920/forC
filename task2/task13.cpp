#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> a)
{
    for (int i : a)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> a;
    int in;

    cin >> in;
    while (in >= 0)
    {
        a.emplace_back(in);
        cin >> in;
    }

    print(a);

    int max = size(a) * 2;
    cout << endl;

    for (int i = 1; i < max; i += 2)
    {
        auto iter = a.cbegin();
        a.insert(iter + i, a.at(i - 1));
    }

    print(a);

    return 0;
}