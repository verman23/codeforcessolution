#include<bits/stdc++.h>
 using namespace std;
     int i=0,a,last=0,current=0;
int main(){
  cin>>a;
  while(a>0){
    i++;
    current=last +i;
    last=current;
    a-=current;
    if(a<0)
    i--;

  }
  cout<<i<<endl;
    return 0;
}