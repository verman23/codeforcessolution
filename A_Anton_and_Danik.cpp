#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, d = 0;
    cin >> n;
    char x='A',y='D';
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i] == x)
          a++;
         else if (arr[i] == y)
         d++;
    }
        if(a>d)
        cout<<"Anton";
        else if(a<d)
        cout<<"Danik";
       else{
          cout<<" Friendship";
            }
       
        
        
        
    

    return 0;
}   