#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int A=0;
        if(s[0]=='y'||s[0]=='Y'){
            A++;
        }
         if(s[1]=='e'||s[1]=='E'){
            A++;
        }
         if(s[2]=='s'||s[2]=='S'){
            A++;
        }
        if(A==3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
       
    }

    return 0;
}