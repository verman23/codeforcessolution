#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int *ans = new int[a];
    for (int i = 0; i < a; i++)
    {
        int j;
        cin >> j;
        int *p = new int[j];
        int *q = new int[j];
        int *m = new int[j-1];
        for (int k = 0; k < j; k++)
        {
            cin>>p[k];
            q[k]=p[k];
            if(k>0 &&(k-1)<j-1){
                m[k-1]=p[k-1]-p[k];
            }
        }
        sort(q,q+j);
        sort(m,m+j-1);
        int a1,a2,a3;
        a1 =q[j-1]-p[0];
        a2=q[j-1]-q[0];
        a3=m[j-2];

        if(j>1)
        ans[i]=max(a1,max(a2,a3));
        else{
            ans[i]=0;
        }
        
    }
    for (int t = 0; t < a; t++)
    {
        cout<<ans[t];
        if(t<a-1){
            cout<<"\n";
        }
    }
    delete ans;
    
    

    return 0;
}