#include <bits/stdc++.h>
using namespace std;

int main()
{
 int arr[10], h=4;
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for (int i = 0; i < 4; i++)
    {
        if(arr[i]!=arr[1+i])
        h--;
    }
    cout<<h;
    
    return 0;
}