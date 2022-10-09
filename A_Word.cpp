#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
 int clower=0,cuper=0;

 for (int i = 0; i < s.size(); i++)
 {
    if(islower(s[i])){
        clower++;
    }else{
        cuper++;
    }
 }
 
    if (clower<cuper)
    {
     char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
           
    }
    else
    {char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
   

    return 0;
}