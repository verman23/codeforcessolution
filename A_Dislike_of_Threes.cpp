#include<bits/stdc++.h>
 using namespace std;
    
int main(){
    int arr[1001];
       int t;
    cin>>t;
    while (t--)
    {
    int k=1;
    for (int i = 1; i <= 1666; i++)
    {
      if(i%3!=0){
        if(i%10!=3){
            arr[k]=1;
            k=k+1;
        }
      }
    }
 
        cout<<arr[k]<<endl;
    }
    
    
    return 0;
}