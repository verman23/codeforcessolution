#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int r = 0, g = 0, b = 0;
        int count = 0;
        for (int i = 0; i < 6; i++)
        {
            if (s[i] == 'r')
                r++;
            if (s[i] == 'g')
                g++;
            if (s[i] == 'b')
                b++;
            if (s[i] == 'R' && r == 0)
            {
                count++;
            }
            if (s[i] == 'G' && g == 0)
            {
                count++;
            }
            if (s[i] == 'B' && b == 0)
            {
                count++;
            }
        }
        if(count>0)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}