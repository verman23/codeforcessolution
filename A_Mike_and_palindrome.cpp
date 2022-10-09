#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string str;
    cin>>str;
    int n = str.size();
    for (i = 0; i <n/2; i++)
    {

        if (str[i] != str[n - 1 - i])
        {
            cout << "NO"<<endl;
            break;
        }
    }
    if(i==n/2)
    {
        cout<<"YES"<<endl;
    }
}