#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a == 1)
        cout << "I hate it ";
    else if (a > 1)
        cout << "I hate that ";
    for (int i = 2; i < a; i++)
    {
        if (i % 2 == 1 && i != a)
            cout << "I hate that ";
        else if (i % 2 == 0 && i != a)
            cout << "I love that ";
    }
    if (a % 2 == 0 && a > 1)
        cout << "I love it ";
    else if (a > 1)
        cout << "I hate it ";
    cout << endl;
    return 0;
}