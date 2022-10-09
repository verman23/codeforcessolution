#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i, a = 0, b = 0;
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            cout << "HARD" << endl;
            break;
        }
    }
    if(i==n){
        cout<<"EASY"<<endl;
    }
    return 0;
}