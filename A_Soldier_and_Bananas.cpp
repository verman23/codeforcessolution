#include <bits/stdc++.h>
using namespace std;

int main()
{
    int $, T, B;
    cin >> $ >> T >> B;
    int count = 0;
    int ans;
    int total;
    for (int i = 1; i <= B; i++)
    {
        ans = i * $;
        count += ans;
    }
    if (count <= T)
    {
        cout << 0 << endl;
    }
    else
    {
        total = count - T;
        cout << total << endl;
    }

    return 0;
}