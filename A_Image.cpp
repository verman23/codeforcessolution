#include<bits/stdc++.h>
 using namespace std;
    
int main(){
  int n;
  cin>>n;
  while(n--){
    string s1,s2;
    cin>>s1>>s2;
 set<char>str;
 for(auto x : s1)str.insert(x);
  for(auto x : s2){str.insert(x);}
cout<<str.size()-1<<endl;
  }
    return 0;
}