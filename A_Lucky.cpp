#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int i, sumF = 0, sumS = 0;
    for (i = 0; i < 3; i++)
    {
        sumF += (s[i]-'0');
    }
    for (i = 3; i < 6; i++)
    {
        sumS += (s[i]-'0');
    }
    if (sumF == sumS)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}