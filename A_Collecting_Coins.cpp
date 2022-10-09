#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test, n1, n2, value, a, b, c, n, v, ar[10] = {0}, j;
    cin >> test;
    while (test--)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> ar[j];
        }
        sort(ar, ar + 3);
        cin >> n;
        n1 = ar[2] - ar[0];
        n2 = ar[2] - ar[1];
        value = n - (n1 + n2);
        if (value >= 0)
        {
            if (value % 3 == 0)
            {
                v = value / 3;
                a = ar[0] + n1 + v;
                b = ar[1] + n2 + v;
                c = ar[2] + v;
                if (a == b && b == c)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}