#include<bits/stdc++.h>
 using namespace std;
    
int main(){
    int arr[6][6],r,c;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                r=abs(3-i);
                c=abs(3-j);
                int d=c+r;
                cout<<d;
            }
        }
    }
    return 0;
}
