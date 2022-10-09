#include <bits/stdc++.h>
using namespace std;
string b;
int n;
 int c;

int main(){

    cin >> n >> b;

    for (int i = 0; i < n; i++)
    {
        if (b[i] == b[i + 1])
        {
            c++;
        }
    }
    cout << c;
    return 0;
}
