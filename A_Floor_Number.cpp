#include<bits/stdc++.h>
 using namespace std;
 #define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
    
int main()
    // int t,n,x,k;
    // cin>>t;
    // while(t--){
    //     cin>>n>>x;
    //    if(n==1||n==2){
    //     cout<<'1'<<endl;
    //    }
    //    else{
    //       k=ceil((n-2)/x);
    //       cout<<k+1<<endl;
    //    }  
    // }
    {
    fastread();
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int c = 2,ans = 1;
        while(c < n){
            c += x;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}