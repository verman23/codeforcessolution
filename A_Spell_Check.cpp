#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;
        string s_op = "Timur ";
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (s == s_op)
        {
            cout << " YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}