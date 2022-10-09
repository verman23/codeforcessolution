#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long  long int n;
    cin >> n;
    int total = 0;
    for (int i = 1; i <= 9; i++)
    {
        int sum = 0;
        for (int j = 1; j <= 4; j++)
        {
            sum = sum * 10 + i;
            total+=j;
            if(sum==n){
                cout<<total<<endl;
                return;
            }
        }
    }
}

int main()
{ int t=1;
cin>>t;
while(t--){
    solve();
}

    return 0;
}