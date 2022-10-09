#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,count=0 ;
    cin >> n>>k;
    int arr[100];

    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }
    for (int  j = 1; j <=n; j++)
    {
        if(arr[j]>0&&arr[j]>=arr[k]){
             count=count+1;
        }
    }
    cout<<count<<endl;
    return 0;
}
    