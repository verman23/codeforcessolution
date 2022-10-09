#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int n = s.length();
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i -1])
            ans++;
    }
    if (ans&1)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {

        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}