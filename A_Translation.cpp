#include<bits/stdc++.h>
 using namespace std;
//  void reverseStr(string& s)
// {
//     int n = s.length();
 
//     // Swap character starting from two
//     // corners
//     for (int i = 0; i < n / 2; i++)
//         swap(s[i], s[n - i - 1]);
// }
    
int main(){
    string s1,s2;
    cin>>s1>>s2;
   reverse(s2.begin(),s2.end());
  
 if(s1==s2){
    cout<<"YES"<<endl;
 }else{
    cout<<"NO"<<endl;
 }
   
    return 0;
}