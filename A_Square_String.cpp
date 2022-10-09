#include <bits/stdc++.h>
using namespace std;
void asquare()
{
    string s;
    cin>>s;
    int n=s.length();
    if(n%2==1)
    cout<<"NO"<<endl;
    else
    {
        string s1=s.substr(0,n/2);
        string s2=s.substr(n/2,n/2);
        // cout<<s1<<" "<<s2<<"\n";
        if(s1==s2)
        cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        asquare();
    }
    return 0;
}